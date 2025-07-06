#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct z{
    char nama[100], ukuran[100], warna[100];
    char designer[100];
    char pembuat[100];
    int stok;
    float harbel, harju;
}produk;

struct y{
    char nama[100], notel[100], alamat[100];
    int poin;
}member;

struct x{
    char usn[100], pass[100];
}admin;

struct w{
    char cabang[100], pasw[100];
    float hasil;
}cabang;

struct v{
    float listrik, bangunan, barang, air;
}pajak;

struct u {
    char nama[100];
    char jabatan[100];
    float gaji;
} pegawai;

struct t {
    char namaBarang[100];
    int jumlah;
    float totalHarga;
    char tanggal[20], pembeli[100];
    char ukuran[100], warna[100]; 
}history;

void tambahMember() {
    system("cls");
    FILE *file = fopen("member.txt", "a+");
    if (!file) {
        printf("Gagal membuka file.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("Masukkan nama member  : ");
    fgets(member.nama, sizeof(member.nama), stdin);
    member.nama[strcspn(member.nama, "\n")] = '\0';

    printf("Masukkan no telepon   : ");
    fgets(member.notel, sizeof(member.notel), stdin);
    member.notel[strcspn(member.notel, "\n")] = '\0';

    printf("Masukkan alamat       : ");
    fgets(member.alamat, sizeof(member.alamat), stdin);
    member.alamat[strcspn(member.alamat, "\n")] = '\0';

    member.poin = 0;

    fwrite(&member, sizeof(member), 1, file);
    fclose(file);

    printf("\nMember berhasil ditambahkan!\n");
    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void beliBarang(const char* namaCabang) {
    system("cls");
    FILE *file = fopen("listprod.txt", "r+");
    if (!file) {
        printf("Gagal membuka file produk.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    char namaBarang[100], ukuran[100], warna[100];
    int jumlah, found = 0;
    long pos;

    printf("Masukkan nama barang yang ingin dibeli : ");
    fgets(namaBarang, sizeof(namaBarang), stdin);
    namaBarang[strcspn(namaBarang, "\n")] = '\0';

    printf("Masukkan ukuran barang                : ");
    fgets(ukuran, sizeof(ukuran), stdin);
    ukuran[strcspn(ukuran, "\n")] = '\0';

    printf("Masukkan warna barang                 : ");
    fgets(warna, sizeof(warna), stdin);
    warna[strcspn(warna, "\n")] = '\0';

    printf("Masukkan jumlah yang ingin dibeli    : ");
    while (scanf("%d", &jumlah) != 1 || jumlah <= 0) {
        printf("Input tidak valid. Masukkan jumlah yang valid: ");
        while (getchar() != '\n');
    }
    getchar();

    char namaPembeli[100];
    printf("Masukkan nama pembeli/member         : ");
    fgets(namaPembeli, sizeof(namaPembeli), stdin);
    namaPembeli[strcspn(namaPembeli, "\n")] = '\0';

    while (fread(&produk, sizeof(produk), 1, file)) {
        if (strcmp(produk.nama, namaBarang) == 0 &&
            strcmp(produk.ukuran, ukuran) == 0 &&
            strcmp(produk.warna, warna) == 0) {
            found = 1;

            if (produk.stok >= jumlah) {
                produk.stok -= jumlah;
                pos = ftell(file) - sizeof(produk);
                fseek(file, pos, SEEK_SET);
                fwrite(&produk, sizeof(produk), 1, file);
                fclose(file); // tutup lebih awal agar tidak tertukar

                float total = produk.harju * jumlah;
                printf("\nPembelian berhasil!\n");
                printf("Total harga: %.2f\n", total);

                // Tulis ke history.txt
                FILE *fhist = fopen("history.txt", "a+");
                if (fhist) {
                    time_t t = time(NULL);
                    struct tm tm = *localtime(&t);
                    sprintf(history.tanggal, "%04d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
                    strcpy(history.pembeli, namaPembeli);
                    strcpy(history.ukuran, ukuran);
                    strcpy(history.warna, warna);
                    strcpy(history.namaBarang, produk.nama);
                    history.jumlah = jumlah;
                    history.totalHarga = total;

                    fwrite(&history, sizeof(history), 1, fhist);
                    fclose(fhist);
                }

                // Update hasil cabang
                FILE *fcab = fopen("listcab.txt", "r+");
                if (fcab) {
                    struct w tempCabang;
                    long posCab;
                    while (fread(&tempCabang, sizeof(tempCabang), 1, fcab)) {
                        if (strcmp(tempCabang.cabang, namaCabang) == 0) {
                            tempCabang.hasil += total;
                            posCab = ftell(fcab) - sizeof(tempCabang);
                            fseek(fcab, posCab, SEEK_SET);
                            fwrite(&tempCabang, sizeof(tempCabang), 1, fcab);
                            break;
                        }
                    }
                    fclose(fcab);
                }

            } else {
                printf("\nStok tidak mencukupi! Stok tersedia: %d\n", produk.stok);
                fclose(file);
            }

            break;
        }
    }

    if (!found) {
        printf("\nBarang tidak ditemukan!\n");
        fclose(file);
    }

    printf("Tekan enter untuk kembali...");
    getchar();
}

void lihatProdukCabang() {
    system("cls");
    FILE *listprod = fopen("listprod.txt", "r+");

    if (!listprod) {
        printf("Belum ada data produk.\n");
    } else {
        printf("========= Daftar Produk =========\n\n");
        while(fread(&produk, sizeof(produk), 1, listprod)) {
            printf("Nama Barang\t: %s\n", produk.nama);
            printf("Stok\t\t: %d\n", produk.stok);
            printf("Warna\t\t: %s\n", produk.warna);
            printf("Ukuran\t\t: %s\n", produk.ukuran);
            printf("Harga Beli\t: %.2f\n", produk.harbel);
            printf("Harga Jual\t: %.2f\n", produk.harju);
            printf("Designer\t: %s\n", produk.designer);
            printf("Pembuat\t\t: %s\n", produk.pembuat);

            printf("----------------------------------------\n");
        }
        fclose(listprod);
    }

    printf("\nTekan enter untuk kembali ke menu cabang...");
    getchar();
    return;
}

void tambahKaryawan() {
    system("cls");
    FILE *file = fopen("karyawan.txt", "a+");
    if (!file) {
        printf("Gagal membuka file.\nTekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("Masukkan nama karyawan : ");
    fgets(pegawai.nama, sizeof(pegawai.nama), stdin);
    pegawai.nama[strcspn(pegawai.nama, "\n")] = '\0';

    printf("Masukkan jabatan        : ");
    fgets(pegawai.jabatan, sizeof(pegawai.jabatan), stdin);
    pegawai.jabatan[strcspn(pegawai.jabatan, "\n")] = '\0';

    printf("Masukkan gaji (Rp)      : ");
    while (scanf("%f", &pegawai.gaji) != 1 || pegawai.gaji < 0) {
        printf("Input tidak valid. Masukkan gaji yang valid: ");
        while(getchar() != '\n');
    }
    getchar();

    fwrite(&pegawai, sizeof(pegawai), 1, file);
    fclose(file);
    printf("\nData karyawan berhasil ditambahkan.\nTekan enter untuk kembali...");
    getchar();
}

void tampilKaryawan() {
    system("cls");
    FILE *file = fopen("karyawan.txt", "r");
    if (!file) {
        printf("Belum ada data karyawan.\nTekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("===== Data Gaji Karyawan =====\n\n");
    while (fread(&pegawai, sizeof(pegawai), 1, file)) {
        printf("Nama    : %s\n", pegawai.nama);
        printf("Jabatan : %s\n", pegawai.jabatan);
        printf("Gaji    : Rp %.2f\n", pegawai.gaji);
        printf("-----------------------------\n");
    }

    fclose(file);
    printf("Tekan enter untuk kembali...");
    getchar();
}

void datakaryawan(){
    system("cls");
    int n;
    while(1){
        system("cls");
        printf("====== Data Karyawan ======\n");
        printf("1.\t Tambah Karyawan\n");
        printf("2.\t Lihat Data Gaji\n");
        printf("3.\t Kembali\n\n");
        printf("Silahkan pilih (1-3): ");
        if(scanf("%d", &n) != 1){
            while(getchar() != '\n');
            n = 0;
        }
        getchar();

        switch(n){
            case 1:
                tambahKaryawan();
                break;

            case 2:
                tampilKaryawan();
                break;

            case 3:
                return;

            default:
                printf("Menu tidak tersedia. Tekan enter untuk melanjutkan...");
                getchar();
                break;
        }
    }
}

void menucab(){
    system("cls");
    int n;
    
    while(1){
        system("cls");
        printf("=========silahkan pilih menu========\n");
        printf("1.\t Produk\n");
        printf("2.\t Tambah member\n");
        printf("3.\t Beli barang\n"); 
        printf("4.\t data karyawan\n\n");
        printf("5.\t Logout\n\n");
        printf("silahkan pilih (1-5): ");
        if(scanf("%d", &n)!=1){
            while(getchar() != '\n');
            n = 0;
        }
        getchar();

        switch(n){
            case 1:
                lihatProdukCabang();
                break;

            case 2:
                tambahMember();
                break;

            case 3:
                beliBarang(cabang.cabang);
                break;

            case 4:
                datakaryawan();
                break;

            case 5:
                return;

            default:
                printf("maaf menu yang anda pilih belum tersedia\n");
                printf("silahkan tekan enter untuk melanjutkan");
                getchar();
                break;
        }
    }
}

void tamcab() {
    system("cls");
    FILE *listcab = fopen("listcab.txt", "a+");
    if (!listcab) {
        printf("Gagal membuka file.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("Masukkan nama cabang\t: ");
    fgets(cabang.cabang, sizeof(cabang.cabang), stdin);
    cabang.cabang[strcspn(cabang.cabang, "\n")] = '\0';
    
    printf("Masukkan password cabang\t: ");
    fgets(cabang.pasw, sizeof(cabang.pasw), stdin);
    cabang.pasw[strcspn(cabang.pasw, "\n")] = '\0';

    cabang.hasil = 0; 

    fwrite(&cabang, sizeof(cabang), 1, listcab);
    fclose(listcab);
    
    printf("\nCabang baru telah dibuat!\n");
    printf("Nama cabang: %s\n", cabang.cabang);
    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void listcabang() {
    system("cls");
    FILE *listcab = fopen("listcab.txt", "r+");
    
    if (!listcab) {
        printf("Belum ada data cabang.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }
     
    printf("===== Daftar Cabang =====\n\n");
    while (fread(&cabang, sizeof(cabang), 1, listcab)) {
        printf("Cabang\t\t: %s\n", cabang.cabang);
        printf("Password Akun\t: %s\n", cabang.pasw);
        printf("Penghasilan\t: %.2f\n", cabang.hasil);
        printf("========================================\n\n");
    }
    fclose(listcab);

    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void datcab(){
    system("cls");
    int n;
    while(1){
        system("cls");
        printf("======Data Cabang=======\n");
        printf("1.\t Lihat cabang\n");
        printf("2.\t Tambahkan cabang\n");
        printf("3.\t Kembali\n\n");
        printf("silahkan pilih (1-3): ");
        if(scanf("%d", &n) != 1){
            while(getchar() != '\n');
            n = 0;
        }
        getchar();
        
        switch (n){
            case 1:
                listcabang();
                break;

            case 2:
                tamcab();
                break;

            case 3:
                return;

            default:
                printf("maaf menu yang anda pilih belum tersedia\n");
                printf("silahkan tekan enter untuk melanjutkan");
                getchar();
                break;
        }
    }
}

void tamprod(){
    system("cls");
    int n;
    FILE *listprod;
    listprod = fopen("listprod.txt", "a+");

    if (!listprod) {
        printf("Gagal membuka file.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("1. Lanjutkan\n");
    printf("2. Kembali\n");
    printf("==========================\n\n");
    printf("Silahkan pilih (1-2): ");
    if(scanf("%d", &n) != 1){
        while(getchar() != '\n');
        n = 2;
    }
    getchar();

    if (n != 1) {
        fclose(listprod);
        return;
    }
    system("cls");

    printf("Masukan jumlah barang yang ingin ditambahkan\t: ");
    while(scanf("%d", &n) != 1 || n <= 0){
        printf("Input tidak valid. Masukkan jumlah yang valid: ");
        while(getchar() != '\n');
    }
    getchar();

    for(int i = 0; i < n; i++){
        printf("====Barang %d====\n", i+1);
        
        printf("Nama Barang\t: ");
        fgets(produk.nama, sizeof(produk.nama), stdin);
        produk.nama[strcspn(produk.nama, "\n")] = '\0';

        printf("Ukuran\t\t: ");
        fgets(produk.ukuran, sizeof(produk.ukuran), stdin);
        produk.ukuran[strcspn(produk.ukuran, "\n")] = '\0';

        printf("Warna\t\t: ");
        fgets(produk.warna, sizeof(produk.warna), stdin);
        produk.warna[strcspn(produk.warna, "\n")] = '\0';

        printf("Harga beli\t: ");
        while(scanf("%f", &produk.harbel) != 1 || produk.harbel < 0){
            printf("Input tidak valid. Masukkan harga beli yang valid: ");
            while(getchar() != '\n');
        }
        getchar();

        printf("Harga Jual\t: ");
        while(scanf("%f", &produk.harju) != 1 || produk.harju < 0){
            printf("Input tidak valid. Masukkan harga jual yang valid: ");
            while(getchar() != '\n');
        }
        getchar();

        printf("Stok\t\t: ");
        while(scanf("%d", &produk.stok) != 1 || produk.stok < 0){
            printf("Input tidak valid. Masukkan stok yang valid: ");
            while(getchar() != '\n');
        }
        getchar();

        printf("Designer Baju\t: ");
        fgets(produk.designer, sizeof(produk.designer), stdin);
        produk.designer[strcspn(produk.designer, "\n")] = '\0';

        printf("Pembuat Baju\t: ");
        fgets(produk.pembuat, sizeof(produk.pembuat), stdin);
        produk.pembuat[strcspn(produk.pembuat, "\n")] = '\0';

        fwrite(&produk, sizeof(produk), 1, listprod);
        printf("\n");
    }
    
    fclose(listprod);
    system("cls");

    printf("Produk berhasil ditambahkan!\n\n");
    printf("List Produk Terbaru:\n\n");
    listprod = fopen("listprod.txt", "r");

    if (!listprod) {
        printf("Gagal membuka file produk untuk menampilkan list terbaru.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    while(fread(&produk, sizeof(produk), 1, listprod)){
        printf("Nama Barang\t: %s\n", produk.nama);
        printf("Ukuran\t\t: %s\n", produk.ukuran);
        printf("Warna\t\t: %s\n", produk.warna);
        printf("Harga Beli\t: %.2f\n", produk.harbel);
        printf("Harga Jual\t: %.2f\n", produk.harju);
        printf("Stok\t\t: %d\n", produk.stok);
        printf("----------------------------------------\n");
    }

    fclose(listprod);
    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void lisprod(){
    system("cls");
    FILE *listprod = fopen("listprod.txt", "r+");
    
    if (!listprod) {
        printf("Belum ada data produk.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }
     
    printf("===== Daftar Produk =====\n\n");
    while(fread(&produk, sizeof(produk), 1, listprod)){
        printf("Nama\t\t: %s\n", produk.nama);
        printf("Ukuran\t\t: %s\n", produk.ukuran);
        printf("Warna\t\t: %s\n", produk.warna);
        printf("Harga beli\t: %.2f\n", produk.harbel);
        printf("Harga jual\t: %.2f\n", produk.harju);
        printf("Stok\t\t: %d\n", produk.stok);
        printf("Designer\t: %s\n", produk.designer);
        printf("Pembuat\t\t: %s\n", produk.pembuat);

        printf("========================================\n\n");
    }
    fclose(listprod);

    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void editStokProduk() {
    system("cls");
    FILE *file = fopen("listprod.txt", "r+");
    if (!file) {
        printf("Gagal membuka file produk.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    char namaBarang[100], ukuran[100], warna[100];
    int found = 0, stokBaru;
    long pos;

    printf("===== Edit Stok Produk =====\n\n");
    printf("Masukkan nama barang : ");
    fgets(namaBarang, sizeof(namaBarang), stdin);
    namaBarang[strcspn(namaBarang, "\n")] = '\0';

    printf("Masukkan ukuran       : ");
    fgets(ukuran, sizeof(ukuran), stdin);
    ukuran[strcspn(ukuran, "\n")] = '\0';

    printf("Masukkan warna        : ");
    fgets(warna, sizeof(warna), stdin);
    warna[strcspn(warna, "\n")] = '\0';

    while (fread(&produk, sizeof(produk), 1, file)) {
        if (strcmp(produk.nama, namaBarang) == 0 &&
            strcmp(produk.ukuran, ukuran) == 0 &&
            strcmp(produk.warna, warna) == 0) {

            found = 1;
            printf("\nStok saat ini: %d\n", produk.stok);
            printf("Masukkan stok baru: ");
            while (scanf("%d", &stokBaru) != 1 || stokBaru < 0) {
                printf("Input tidak valid. Masukkan angka stok yang valid: ");
                while(getchar() != '\n');
            }
            getchar(); // bersihkan newline

            produk.stok = stokBaru;

            pos = ftell(file) - sizeof(produk);
            fseek(file, pos, SEEK_SET);
            fwrite(&produk, sizeof(produk), 1, file);

            printf("\nStok berhasil diperbarui!\n");
            break;
        }
    }

    if (!found) {
        printf("\nProduk tidak ditemukan!\n");
    }

    fclose(file);
    printf("Tekan enter untuk kembali...");
    getchar();
}

void datprod(){
    system("cls");
    int n;
    while(1){
        system("cls");
        printf("======Data Produk=======\n");
        printf("1.\t Lihat produk\n");
        printf("2.\t Tambahkan produk\n");
        printf("3.\t Edit stok produk\n");
        printf("4.\t Kembali\n\n");
        printf("silahkan pilih (1-4): ");
        if(scanf("%d", &n) != 1){
            while(getchar() != '\n');
            n = 0;
        }
        getchar();
        
        switch (n){
            case 1:
                lisprod();
                break;

            case 2:
                tamprod();
                break;

            case 3:
                editStokProduk(); 
                break;

            case 4:
                return;

            default:
                printf("maaf menu yang anda pilih belum tersedia\n");
                printf("silahkan tekan enter untuk melanjutkan");
                getchar();
                break;
        }
    }
}

void tampilMember() {
    system("cls");
    FILE *file = fopen("member.txt", "r+");

    if (!file) {
        printf("Belum ada data member.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("===== Daftar Member =====\n\n");
    while (fread(&member, sizeof(member), 1, file)) {
        printf("Nama    : %s\n", member.nama);
        printf("No Telp : %s\n", member.notel);
        printf("Alamat  : %s\n", member.alamat);
        printf("Poin    : %d\n", member.poin);
        printf("=============================\n");
    }

    fclose(file);
    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void dataPajak() {
    system("cls");
    FILE *file = fopen("pajak.txt", "r+");

    if (!file) file = fopen("pajak.txt", "w+"); // buat file jika belum ada

    if (!file) {
        printf("Gagal membuka file pajak.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    printf("Masukkan biaya listrik   : ");
    while(scanf("%f", &pajak.listrik)!=1 || pajak.listrik < 0){
        printf("Input tidak valid. Masukkan biaya listrik yang valid: ");
        while(getchar()!='\n');
    }
    printf("Masukkan biaya bangunan  : ");
    while(scanf("%f", &pajak.bangunan)!=1 || pajak.bangunan < 0){
        printf("Input tidak valid. Masukkan biaya bangunan yang valid: ");
        while(getchar()!='\n');
    }
    printf("Masukkan biaya barang    : ");
    while(scanf("%f", &pajak.barang)!=1 || pajak.barang < 0){
        printf("Input tidak valid. Masukkan biaya barang yang valid: ");
        while(getchar()!='\n');
    }
    printf("Masukkan biaya air       : ");
    while(scanf("%f", &pajak.air)!=1 || pajak.air < 0){
        printf("Input tidak valid. Masukkan biaya air yang valid: ");
        while(getchar()!='\n');
    }
    getchar();

    rewind(file);
    fwrite(&pajak, sizeof(pajak), 1, file);
    fclose(file);

    printf("\nData pajak berhasil disimpan.\n");
    printf("Tekan enter untuk kembali...");
    getchar();
    return;
}

void dataKeuangan() {
    system("cls");
    FILE *file = fopen("listcab.txt", "r");

    if (!file) {
        printf("Belum ada data cabang.\n");
        printf("Tekan enter untuk kembali...");
        getchar();
        return;
    }

    float total = 0;
    printf("===== Laporan Keuangan Cabang =====\n\n");
    while (fread(&cabang, sizeof(cabang), 1, file)) {
        printf("Cabang         : %s\n", cabang.cabang);
        printf("Penghasilan    : %.2f\n", cabang.hasil);
        printf("------------------------------------\n");
        total += cabang.hasil;
    }
    printf("\nTotal Penghasilan Semua Cabang: %.2f\n", total);
    fclose(file);
    printf("\nTekan enter untuk kembali...");
    getchar();
    return;
}

void lihatHistory() {
    system("cls");
    FILE *fhist = fopen("history.txt", "r");
    if (!fhist) {
        printf("Belum ada data pembelian.\nTekan enter untuk kembali...");
        getchar();
        return;
    }

    struct t list[1000]; 
    int count = 0;
    while (fread(&list[count], sizeof(struct t), 1, fhist)) {
        count++;
    }
    fclose(fhist);

    // Sort tanggal terbaru
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(list[j].tanggal, list[i].tanggal) > 0) {
                struct t temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    printf("===== Riwayat Pembelian (Sort by Tanggal Terbaru) =====\n\n");
    for (int i = 0; i < count; i++) {
        printf("Tanggal\t\t: %s\n", list[i].tanggal);
        printf("Barang\t\t: %s\n", list[i].namaBarang);
        printf("Ukuran\t\t: %s\n", list[i].ukuran);
        printf("Warna\t\t: %s\n", list[i].warna);
        printf("Jumlah\t\t: %d\n", list[i].jumlah);
        printf("Total Harga\t: %.2f\n", list[i].totalHarga);
        printf("Pembeli\t\t: %s\n", list[i].pembeli);
        printf("----------------------------------\n");
    }

    printf("Tekan enter untuk kembali...");
    getchar();
}

void menu(){
    system("cls");
    int n;

    while(1){
        system("cls");
        printf("======Silahkan pilih menu=====\n");
        printf("1.\t Data cabang\n");
        printf("2.\t Data produk\n");
        printf("3.\t Data member\n");
        printf("4.\t Data keuangan\n");
        printf("5.\t Data pajak\n");
        printf("6.\t histori\n");
        printf("7.\t Logout\n\n");
        printf("silahkan pilih (1-7): ");
        if(scanf("%d", &n) != 1){
            while(getchar() != '\n');
            n = 0;
        }
        getchar();

        switch (n){
            case 1:
                datcab();
                break;
            
            case 2:
                datprod();
                break;
            
            case 3:
                tampilMember();
                break;

            case 4:
                dataKeuangan();
                break;

            case 5:
                dataPajak();
                break;

            case 6:
                lihatHistory();
                break;

            case 7:
                return;
                
            default:
                printf("maaf menu yang anda pilih belum tersedia\n");
                printf("silahkan tekan enter untuk melanjutkan");
                getchar();
                break;
        }
    }
}

void logcab(char *cab, char *pass) {
    system("cls");
    printf("====Menu login cabang====\n");
    printf("username\t: ");
    fgets(cab, 100, stdin);
    cab[strcspn(cab, "\n")] = '\0';
    
    printf("password\t: ");
    fgets(pass, 100, stdin);
    pass[strcspn(pass, "\n")] = '\0';
}

void logtemcab() {
    system("cls");
    int max = 3, awal = 0;
    char cab[100], pas[100];

    while (awal < max) {
        logcab(cab, pas);

        FILE *logcab = fopen("listcab.txt", "r"); 
        if (!logcab) {
            printf("Belum ada data cabang. Silakan hubungi admin.\n");
            printf("Tekan Enter untuk kembali...");
            getchar();
            return;
        }

        int found = 0;
        while (fread(&cabang, sizeof(cabang), 1, logcab)) {
            if (strcmp(cab, cabang.cabang) == 0 && strcmp(pas, cabang.pasw) == 0) {
                found = 1;
                break;
            }
        }
        fclose(logcab); 

        if (found) {
            printf("Selamat datang di cabang %s!\n", cab);
            printf("Tekan Enter untuk melanjutkan...\n");
            getchar();
            menucab(); 
            return;
        } else {
            awal++;
            if (awal < max) {
                printf("cabang atau password salah.\n");
                printf("Sisa percobaan: %d\n\n", max - awal);
            } else {
                printf("Tidak punya akun? Silakan hubungi admin untuk mendaftar cabang.\n\n");
                printf("Tekan Enter untuk kembali ke menu utama...");
                getchar();
                return;
            }
        }
    }
}

void login(char *user, char *pass){
    system("cls");
    printf("====Menu login admin====\n");
    printf("username\t: ");
    fgets(user, 100, stdin);
    user[strcspn(user, "\n")] = '\0';
    
    printf("password\t: ");
    fgets(pass, 100, stdin);
    pass[strcspn(pass, "\n")] = '\0';
}

void logtem(){
    system("cls");
    int max = 3, awal = 0;
    char user[100], pas[100];

    while (awal < max){
        login(user, pas);
        if(strcmp(user, admin.usn) == 0 && strcmp(pas, admin.pass) == 0){
            printf("Selamat datang admin!\n");
            printf("Tekan enter untuk melanjutkan...");
            getchar();
            menu();
            return;
        } else{
            awal++;
            system("cls");
            if(awal < max){
                printf("Maaf username atau password tidak dikenali\n");
                printf("sisa percobaan = %d\n\n", max - awal);
            } else{
                printf("maaf anda sudah diblokir dari login admin, silahkan hubungi manager.\n\n");
                printf("Tekan enter untuk kembali...");
                getchar();
                return;
            }
        }   
    }
}

int main(){
    system("cls");
    int n;
    strcpy(admin.usn, "ninesout");
    strcpy(admin.pass, "kelompok9");

    while(1) {
        system("cls");
        printf("==========Menu login=========\n");
        printf("1.\t Admin\n");
        printf("2.\t Cabang\n");
        printf("3.\t Keluar\n\n");
        printf("silahkan pilih menu (1-3)\t: ");
        if(scanf("%d", &n) != 1){
            while(getchar() != '\n');
            n = 0;
        }
        getchar();
        
        switch(n){
            case 1:
                logtem();
                break;

            case 2:
                logtemcab();
                break;

            case 3:
                printf("Terima kasih telah menggunakan program ini!\n");
                return 0;

            default:
                printf("maaf menu yang anda pilih belum tersedia\n");
                printf("silahkan tekan enter untuk melanjutkan");
                getchar();
                break;
        }
    }

    return 0;
}
