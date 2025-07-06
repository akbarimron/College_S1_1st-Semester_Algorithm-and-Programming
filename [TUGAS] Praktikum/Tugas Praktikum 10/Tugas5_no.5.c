#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan data barang
typedef struct {
    char kode[10];
    char nama[50];
} Barang;

// Fungsi untuk mencari barang berdasarkan kode atau nama
int cariBarang(Barang barangToko[], int jumlahBarang, char kriteria[], char nilai[], Barang *hasil) {
    for (int i = 0; i < jumlahBarang; i++) {
        if ((strcmp(kriteria, "kode") == 0 && strcmp(barangToko[i].kode, nilai) == 0) ||
            (strcmp(kriteria, "nama") == 0 && strcmp(barangToko[i].nama, nilai) == 0)) {
            *hasil = barangToko[i];
            return 1; // Barang ditemukan
        }
    }
    return 0; // Barang tidak ditemukan
}

int main() {
    // Data barang di toko
    Barang barangToko[] = {
        {"B001", "Paku 2 Inch"},
        {"B002", "Semen Tiga Roda"},
        {"B003", "Cat Tembok Dulux"},
        {"B004", "Keramik 40x40"},
        {"B005", "Kuas Cat 3 Inch"}
    };
    int jumlahBarang = sizeof(barangToko) / sizeof(barangToko[0]);

    char pilihan[10];
    char input[50];
    Barang hasil;

    printf("Selamat datang di sistem pencarian barang!\n");
    printf("Cari berdasarkan (kode/nama): ");
    scanf("%s", pilihan);

    if (strcmp(pilihan, "kode") == 0) {
        printf("Masukkan kode barang: ");
        scanf("%s", input);
        if (cariBarang(barangToko, jumlahBarang, "kode", input, &hasil)) {
            printf("Barang ditemukan: Kode Barang = %s, Nama Barang = %s\n", hasil.kode, hasil.nama);
        } else {
            printf("Barang tidak ditemukan.\n");
        }
    } else if (strcmp(pilihan, "nama") == 0) {
        printf("Masukkan nama lengkap barang: ");
        getchar(); // Membersihkan buffer input
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // Menghapus karakter newline
        if (cariBarang(barangToko, jumlahBarang, "nama", input, &hasil)) {
            printf("Barang ditemukan: Kode Barang = %s, Nama Barang = %s\n", hasil.kode, hasil.nama);
        } else {
            printf("Barang tidak ditemukan.\n");
        }
    } else {
        printf("Pilihan tidak valid!\n");
    }

    return 0;
}
