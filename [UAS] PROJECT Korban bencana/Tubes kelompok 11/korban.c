#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Akbar dan Rizki_korban Bencana.h"

//resetbubble untuk reset urutan nomor pada data
void resetbubble(Korban *korban, int jumlah) {    
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (korban[j].no > korban[j + 1].no) {

                // Swap data korban
                Korban temp = korban[j];
                korban[j] = korban[j + 1];
                korban[j + 1] = temp;
            }
        }
    }
}
//menampilkan list korban
void tampilkanKorban(Korban *korban, int jumlah) {
    
    if (jumlah == 0) {
        system("cls");
        printf("\n=========================== INFORMATION ===========================\n");
        printf("Tidak ada data korban yang tersedia.\n");
        printf("------------------------------------------------------------------\n");
        return;
    }

    printf("\n=================================================== DATA KORBAN BENCANA ========================================\n");
    printf("| No |           Status           | Jenis Kelamin |  Usia  |   Jumlah   |  Anggaran Perawatan  | Anggaran Total |\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");
    int totalBiayaKeseluruhan = 0; 
    for (int i = 0; i < jumlah; i++) {
        int biayaTotal = korban[i].total * korban[i].biaya;
        totalBiayaKeseluruhan += biayaTotal;
        printf("| %-3d | %-25s | %-13c | %-6d | %-10d | %-20d | %-14d |\n",
               korban[i].no, 
               korban[i].status,
               korban[i].jenis_kelamin,
               korban[i].usia,
               korban[i].total,
               korban[i].biaya,
               korban[i].biayaTotal = korban[i].total * korban[i].biaya);
    }
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("|                                TOTAL BIAYA KESELURUHAN: %-33d                    |\n", totalBiayaKeseluruhan);
    printf("----------------------------------------------------------------------------------------------------------------\n");

}

void tambahKorban(Korban *korban, int *jumlah) {
    
    if (*jumlah >= MAX_KORBAN) {
        system("cls");
        printf("\n============================ FAILED ============================\n");
        printf("Data korban sudah penuh!\n");
        printf("------------------------------------------------------------------\n");
        return;
    }
    //deklarasi k untuk menyimpan korban
    // * digunakan sebagai pointer untuk mendapatkan nilai yang tersimpan dalam variabel tersebut
    // mengakses alamat
    Korban k;
    k.no = *jumlah + 1;
    printf("\n======================== TAMBAH DATA KORBAN ========================\n");
    printf("Masukkan status: ");
    scanf(" %[^\n]%*c", k.status); 
     printf("------------------------------------------------------------------\n");
    printf("Masukkan Jenis Kelamin (L/P): ");
    scanf(" %c", &k.jenis_kelamin); 
     printf("------------------------------------------------------------------\n");
    printf("Masukkan Usia: ");
    scanf("%d", &k.usia);
     printf("------------------------------------------------------------------\n");
    printf("Masukkan jumlah Korban: ");
    scanf("%d", &k.total);
     printf("------------------------------------------------------------------\n");
    printf("Masukkan keterangan korban: ");
    scanf(" %[^\n]%*c", k.keterangan);
     printf("------------------------------------------------------------------\n");
    printf("Masukkan biaya perawatan: ");
    scanf("%d", &k.biaya);

    korban[*jumlah] = k;
    (*jumlah)++;

    system("cls");
    printf("============================= SUCCESS ============================\n");
    printf("Data korban berhasil ditambahkan!\n");
    printf("------------------------------------------------------------------\n");
}

void ubahKorban(Korban *korban, int *jumlah) {
    int no;
    int bagian;
    //menampilkan dan mereset bubble agar korban sesuai nomor dan index saat dipilih korban nya
    tampilkanKorban(korban, *jumlah);
    resetbubble(korban, *jumlah);
    printf("\n======================== EDIT KORBAN ===========================\n");
    printf("Masukkan nomor korban yang ingin diubah: ");
    scanf("%d", &no);
    printf("------------------------------------------------------------------\n");
    
    if (no <= 0 || no > *jumlah) {
        printf("\n============================ FAILED ============================\n");
        printf("Nomor korban tidak valid!\n");
        printf("------------------------------------------------------------------\n");
        return;
    }
    printf("\n========================== EDIT KORBAN ===========================");
    printf("\n | [1] | EDIT SEMUA BAGIAN        |");
    printf("\n | [2] | EDIT STATUS              |");
    printf("\n | [3] | EDIT JENIS KELAMIN       |");
    printf("\n | [4] | EDIT USIA                |");
    printf("\n | [5] | EDIT JUMLAH KORBAN       |");
    printf("\n | [6] | EDIT KETERANGAN KORBAN   |");
    printf("\n | [7] | DIT BIAYA PERAWATAN      |");
    printf("\n=================================================================\n");
    printf("Bagian yang ingin di edit :");
    scanf("%d", &bagian);
    printf("------------------------------------------------------------------\n");
    switch (bagian)
    {
        // -> digunakan untuk mengakses anggota ppointer alias (*pointer).member sama saja sperti contoh (*k.total)
    case 1:
        Korban *k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan status baru: ");
        scanf(" %[^\n]%*c", k->status);
        printf("------------------------------------------------------------------\n");
        printf("Masukkan jenis kelamin baru (L/P): ");
        scanf(" %c", &k->jenis_kelamin); 
        printf("------------------------------------------------------------------\n");
        printf("Masukkan usia baru: ");
        scanf("%d", &k->usia);
        printf("------------------------------------------------------------------\n");
        printf("Masukkan jumlah korban baru: ");
        scanf("%d", &k->total);
        printf("------------------------------------------------------------------\n");
        printf("Masukkan keterangan korban: ");
        scanf(" %[^\n]%*c", k->keterangan);
        printf("------------------------------------------------------------------\n");
        printf("Masukkan biaya perawatan baru: ");
        scanf("%d", &k->biaya);

        k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("Data korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");
        break;
        
    case 2:
        k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan status baru: ");
        scanf(" %[^\n]%*c", k->status);
        printf("------------------------------------------------------------------\n");

         k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("Status korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");    
        break;
    case 3:
        k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan jenis Kelamin baru: ");
        scanf(" %c", &k->jenis_kelamin);
        printf("------------------------------------------------------------------\n");

         k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("jenis kelamin korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");
        break;
        
    case 4:
        k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan usia baru: ");
        scanf("%d", &k->usia);
        printf("------------------------------------------------------------------\n");

         k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("usia korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");
        break;
        
    case 5:
        k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan Jumlah korban baru: ");
        scanf("%d", &k->total);
        printf("------------------------------------------------------------------\n");

        k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("jumlah korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");
        
        break;
    case 6:
        k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan Keterangan baru: ");
        scanf(" %[^\n]%*c", k->keterangan);
        printf("------------------------------------------------------------------\n");

         k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("Keterangan korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");
        break;
    case 7:
        k = &korban[no - 1]; 
        printf("\n========================== EDIT KORBAN ==========================\n");
        printf("Masukkan Biaya perawatan baru: ");
        scanf(" %d", &k->biaya);
        printf("------------------------------------------------------------------\n");

         k->biayaTotal = k->total * k->biaya; 

        system("cls");
        printf("============================= SUCCESS ============================\n");
        printf("Biaya perawatan korban berhasil diubah!\n");
        printf("------------------------------------------------------------------\n");
        break;
    
    default:
    printf("============================= ERROR ============================\n");
    printf("Input tidak valid.\n");
    printf("------------------------------------------------------------------\n");
        break;
    }

    
}

void hapuskorban(Korban *korban, int *jumlah){
    int no;
    tampilkanKorban(korban, *jumlah);
    resetbubble(korban, *jumlah);
    printf("\n======================== HAPUS KORBAN ===========================\n");
    printf("Masukkan nomor korban yang ingin dihapus: ");
    scanf("%d", &no);
    printf("------------------------------------------------------------------\n");
    
    if (no <= 0 || no > *jumlah) {
        printf("\n============================ FAILED ============================\n");
        printf("Nomor korban tidak valid!\n");
        printf("------------------------------------------------------------------\n");
        return;
    }

    for (int i = no - 1; i < *jumlah - 1; i++) {
        korban[i] = korban[i + 1];
    }
    (*jumlah)--;

    for (int i = no - 1; i < *jumlah; i++) {
        korban[i].no = i + 1;
    }
    system("cls");
    printf("\n============================ SUCCES ============================\n");
    printf("Korban nomor %d berhasil dihapus!\n", no);
    printf("------------------------------------------------------------------\n");

}
void bubbleSortKorbanByUsia(Korban *korban, int jumlah) {    
    if (jumlah == 0) {
        printf("\n======================= DATA TIDAK DITEMUKAN =======================\n");
        printf("\nTidak ada data korban untuk diurutkan.\n");
        printf("------------------------------------------------------------------\n");
        
        return;
    }

    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (korban[j].usia > korban[j + 1].usia) {
                // Swap data korban
                Korban temp = korban[j];
                korban[j] = korban[j + 1];
                korban[j + 1] = temp;
            }
        }
    }
    printf("\n======================== SUCCES =========================\n");
    printf("\nData korban berhasil diurutkan berdasarkan usia (ascending).\n");
    printf("------------------------------------------------------------------\n");
}
int partition(Korban *korban, int low, int high) {
    int pivot = korban[high].usia; 
    int i = (low - 1);  

    for (int j = low; j < high; j++) {
        if (korban[j].usia <= pivot) {
            i++;
            //tukar
            Korban temp = korban[i];
            korban[i] = korban[j];
            korban[j] = temp;
        }
    }
    
    Korban temp = korban[i + 1];
    korban[i + 1] = korban[high];
    korban[high] = temp;

    return (i + 1);
}
void quickSortKorbanByUsia(Korban *korban, int low, int high) {
    if (low < high) {
        
        int pi = partition(korban, low, high);

        
        quickSortKorbanByUsia(korban, low, pi - 1); //sisi kiri
        quickSortKorbanByUsia(korban, pi + 1, high); //sisi kanan
    }
}


void sequentialSearchKorbanByUsia(Korban *korban, int jumlah, int usia) {    
      if (jumlah == 0) {
        printf("\n======================= DATA TIDAK DITEMUKAN =======================\n");
        printf("\nTidak ada data korban untuk dicari.\n");
        printf("------------------------------------------------------------------\n");
        return;
    }
    bubbleSortKorbanByUsia(korban, jumlah);
    int found = 0;

    for (int i = 0; i < jumlah; i++) {
        if (korban[i].usia == usia) {
            // Tampilkan data korban yang ditemukan
            printf("\n======================= KORBAN DITEMUKAN =======================\n");
            printf("Nomor Korban: %d\n", korban[i].no);
            printf("Status: %s\n", korban[i].status);
            printf("Jenis Kelamin: %c\n", korban[i].jenis_kelamin);
            printf("Usia: %d\n", korban[i].usia);
            printf("Keterangan: %s\n", korban[i].keterangan);
            printf("Biaya Perawatan: %d\n", korban[i].biaya);
            printf("Jumlah Korban: %d\n", korban[i].total);
            printf("Anggaran Total: %d\n", korban[i].biayaTotal);
            printf("------------------------------------------------------------------\n");
            found = 1;                        
        }
    }
    resetbubble(korban, jumlah);
    if (!found) {
        printf("\n======================= DATA TIDAK DITEMUKAN =======================\n");
        printf("Tidak ada korban dengan usia %d.\n", usia);
        printf("------------------------------------------------------------------\n");
    }
}

//harus urut
void binarySearchKorbanByUsia(Korban *korban, int jumlah, int usia) {
    if (jumlah == 0) {
        printf("\n======================= DATA TIDAK DITEMUKAN =======================\n");
        printf("\nTidak ada data korban untuk dicari.\n");
        printf("------------------------------------------------------------------\n");
        return;
    bubbleSortKorbanByUsia(korban, jumlah);
    }

    int left = 0, right = jumlah - 1, found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (korban[mid].usia == usia) {
            // Cari semua korban dengan usia yang sama
            int start = mid, end = mid;
             // Cari semua korban dengan usia yang sama

            // Perluas ke kiri
            while (start > 0 && korban[start - 1].usia == usia) {
                start--;
            }

            // Perluas ke kanan
            while (end < jumlah - 1 && korban[end + 1].usia == usia) {
                end++;
            }

          

            // Tampilkan semua korban yang cocok
            printf("\n======================= KORBAN DITEMUKAN =======================\n");
            for (int i = start; i <= end; i++) {
                printf("Nomor Korban: %d\n", korban[i].no);
                printf("Status: %s\n", korban[i].status);
                printf("Jenis Kelamin: %c\n", korban[i].jenis_kelamin);
                printf("Usia: %d\n", korban[i].usia);
                printf("Keterangan: %s\n", korban[i].keterangan);
                printf("Biaya Perawatan: %d\n", korban[i].biaya);
                printf("Jumlah Korban: %d\n", korban[i].total);
                printf("Anggaran Total: %d\n", korban[i].biayaTotal);
                printf("------------------------------------------------------------------\n");
            }
            resetbubble(korban, jumlah);
            return;
        }

        if (korban[mid].usia < usia)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // Jika tidak ditemukan, tampilkan pesan
    printf("\n======================= DATA TIDAK DITEMUKAN =======================\n");
    printf("Tidak ada korban dengan usia %d.\n", usia);
    printf("------------------------------------------------------------------\n");
}

void Bubblesortrekap(Rekap *rekapan, int jumlah) {    
   
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (rekapan[j].tanggal > rekapan[j + 1].tanggal) {
                // Swap data korban
                Rekap temp = rekapan[j];
                rekapan[j] = rekapan[j + 1];
                rekapan[j + 1] = temp;
            }
        }
    }

}
void Bubblesortrekapbulan(Rekap *rekapan, int jumlah) {    
   
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (rekapan[j].bulan > rekapan[j + 1].bulan) {
                // Swap data korban
                Rekap temp = rekapan[j];
                rekapan[j] = rekapan[j + 1];
                rekapan[j + 1] = temp;
            }
        }
    }

}



void tambahJumlahKorban(Rekap *rekapan, Korban *korban, int jumlah, int *jumlahrekap) {
    if (jumlah == 0) {
        printf("\n========================= FAILED =========================\n");
        printf("\nTidak ada data korban yang tersedia.\n");
        printf("\n----------------------------------------------------------\n");
        return;
    }
    
     int tanggal, no, tambahan, bulan;
     
    tampilkanKorban(korban, jumlah); // Menampilkan data korban.
    resetbubble(korban, jumlah);
    printf("\n========================= PILIH KORBAN =========================");
    printf("\nMasukkan nomor korban yang jumlahnya akan ditambah: ");
    scanf("%d", &no);
    printf("\n----------------------------------------------------------------\n");

    if (no < 1 || no > jumlah) {
        printf("\n========================= FAILED =========================\n");
        printf("\nNomor korban tidak valid.\n");
        printf("\n----------------------------------------------------------\n");
        return;
    }
    printf("\n========================= TAMBAH =========================\n");
    printf("Masukkan jumlah tambahan korban: ");
    scanf("%d", &tambahan);
    printf("\n----------------------------------------------------------\n");

    if (tambahan < 0) {
        printf("\n========================= ERROR =========================\n");
        printf("\nJumlah tambahan tidak boleh negatif.\n");
        printf("\n---------------------------------------------------------\n");
        return;
    }

    korban[no - 1].total += tambahan;
    korban[no - 1].biayaTotal = korban[no - 1].total * korban[no - 1].biaya;

   printf("================================= INPUT TANGGAL =======================================\n");
    printf("Masukkan tanggal perubahan (1-31): ");
    scanf("%d", &tanggal);
    printf("\n-------------------------------------------------------------------------------------\n");
    if (tanggal < 1 || tanggal > 31) {
        printf("================================= FAILED =======================================");
        printf("\nTanggal tidak valid.\n");
        printf("\n-------------------------------------------------------------------------------------\n");
        return;
    }
    printf("================================= INPUT TANGGAL =======================================\n");
    printf("Masukkan bulan perubahan (1-12): ");
    scanf("%d", &bulan);
    printf("\n-------------------------------------------------------------------------------------\n");

    if (bulan < 1 || bulan > 12) {
        printf("================================= FAILED =======================================\n");
        printf("Bulan tidak valid.\n");
        printf("\n-------------------------------------------------------------------------------------\n");
        return;
        }
        
    Rekap r;
    r.noKorban = no;
    strcpy(r.perubahan, "Tambah korban");
    r.jumlahPerubahan = tambahan;
    r.totalSetelahPerubahan = korban[no - 1].total;
    r.tanggal = tanggal;                    
    r.bulan = bulan;
    //menambahkan r ke rekapan global
    rekapan[*jumlahrekap] = r;
    (*jumlahrekap)++;
    

    printf("\n========================= SUCCES =========================\n");
    printf("\nJumlah korban berhasil ditambahkan.\n");
    printf("\n----------------------------------------------------------\n");
    tampilkanKorban(korban, jumlah); 
}

void rekaptanggal(Rekap *rekapan, int jumlahrekap) {
    Bubblesortrekap(rekapan, jumlahrekap);
    Bubblesortrekapbulan(rekapan, jumlahrekap);
    printf("\n=================================================== REKAP PERUBAHAN ========================================\n");
    printf("| No Korban | Jenis Perubahan |   Tanggal   | Jumlah Perubahan | Total Setelah Perubahan |\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < jumlahrekap; i++) {
       printf("| %-9d | %-16s | %02d/%02d/2024 | %-16d | %-23d |\n",
        rekapan[i].noKorban,
        rekapan[i].perubahan,
        rekapan[i].tanggal,
        rekapan[i].bulan,  
        rekapan[i].jumlahPerubahan,
        rekapan[i].totalSetelahPerubahan);

    }
}
void kurangiJumlahKorban(Rekap *rekapan, Korban *korban, int jumlah, int *jumlahrekap) {
    if (jumlah == 0) {
        printf("\n=========================  FAILED =========================\n");
        printf("\nTidak ada data korban yang tersedia.\n");
        printf("\n------------------------------------------------------------\n");
        return;
    }

    int no, pengurangan, tanggal, bulan;
    tampilkanKorban(korban, jumlah); // Menampilkan data korban.
    resetbubble(korban, jumlah);
    printf("\n========================= PILIH KORBAN =========================\n");
    printf("\nMasukkan nomor korban yang jumlahnya akan dikurangi: ");
    printf("\n----------------------------------------------------------------\n");
    scanf("%d", &no);

    if (no < 1 || no > jumlah) {
        printf("\n============================ FAILED ============================\n");
        printf("\nNomor korban tidak valid.\n");
        printf("\n----------------------------------------------------------------\n");
        return;
    }
    printf("\n============================ KURANGI ============================\n");
    printf("Masukkan jumlah pengurangan korban: ");
    scanf("%d", &pengurangan);
    printf("\n----------------------------------------------------------------\n");

    if (pengurangan < 0 || pengurangan > korban[no - 1].total) {
        printf("\n======================================= ERROR =======================================\n");
        printf("\nJumlah pengurangan tidak valid. Pastikan nilai tidak lebih besar dari jumlah total korban.\n");
        printf("\n-------------------------------------------------------------------------------------\n");
        return;
    }
    printf("================================= INPUT TANGGAL =======================================\n");
    printf("Masukkan tanggal perubahan (1-31): ");
    scanf("%d", &tanggal);
    printf("\n-------------------------------------------------------------------------------------\n");
    if (tanggal < 1 || tanggal > 31) {
        printf("================================= FAILED =======================================");
        printf("\nTanggal tidak valid.\n");
        printf("\n-------------------------------------------------------------------------------------\n");
        return;
    }
    printf("================================= INPUT TANGGAL =======================================\n");
    printf("Masukkan bulan perubahan (1-12): ");
    scanf("%d", &bulan);
    printf("\n-------------------------------------------------------------------------------------\n");

    if (bulan < 1 || bulan > 12) {
        printf("================================= FAILED =======================================");
        printf("Bulan tidak valid.\n");
        printf("\n-------------------------------------------------------------------------------------\n");
        return;
    }

    korban[no - 1].total -= pengurangan;
    korban[no - 1].biayaTotal = korban[no - 1].total * korban[no - 1].biaya;

    Rekap r;
    r.noKorban = no;
    strcpy(r.perubahan, "Kurangi korban");
    r.jumlahPerubahan = pengurangan;
    r.totalSetelahPerubahan = korban[no - 1].total;
    r.tanggal = tanggal;                    
    r.bulan = bulan;  
    rekapan[*jumlahrekap] = r;
    (*jumlahrekap)++;
    
    printf("\n============================ SUCCES ============================\n");
    printf("\nJumlah korban berhasil dikurangi.\n");
    printf("\n----------------------------------------------------------------\n");
    tampilkanKorban(korban, jumlah); 
}


void anggotaKelompok() {
    system("cls");
    printf("============================= ANGGOTA KELOMPOK ============================\n");
    printf("| NAMA            | %-20s |\n", "Muhamad Akbar Imron");
    printf("| NIM             | %-20s |\n", "2404565");
    printf("--------------------------------------------------------------------------\n");
    printf("| NAMA            | %-20s |\n", "Rizki Rafli D.");
    printf("| NIM             | %-20s |\n", "2404895 ");
    printf("--------------------------------------------------------------------------\n");
}

//NGIDE AJA KAK
void tampilkanKeteranganKorban(Korban *korban, int jumlah) {
    int no;
    
    tampilkanKorban(korban, jumlah);
    resetbubble(korban, jumlah);
    printf("\n============================ RINCIAN ============================\n");
    printf("\nMasukkan nomor korban yang ingin ditampilkan keterangan: ");
    scanf("%d", &no);
    printf("------------------------------------------------------------------\n");
    
    
    if (no < 1 || no > jumlah) {
        printf("\n============================ FAILED ============================\n");
        printf("Nomor korban tidak valid!\n");
        printf("------------------------------------------------------------------\n");
        return;
    }

    
    Korban k = korban[no - 1];
    
    printf("\n============================= KETERANGAN KORBAN ============================\n");
    printf("Nomor Korban: %d\n", k.no);
    printf("Status: %s\n", k.status);
    printf("Jenis Kelamin: %c\n", k.jenis_kelamin);
    printf("Usia: %d\n", k.usia);
    printf("Keterangan: %s\n", k.keterangan);
    printf("Biaya Perawatan: %d\n", k.biaya);
    printf("Jumlah Korban: %d\n", k.total);
    printf("Anggaran Total: %d\n", k.biayaTotal);
    printf("------------------------------------------------------------------\n");
}


