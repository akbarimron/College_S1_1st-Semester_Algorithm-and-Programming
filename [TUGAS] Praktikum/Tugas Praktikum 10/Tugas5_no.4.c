#include <stdio.h>
#include <string.h>

int main() {
    char judul[50]; // Variabel  judul buku yang akan dicari
    int hasil = 0;  // penanda untuk mengecek apakah buku ditemukan atau tidak

    struct {
        char judul[50];
        int kode;
    } buku[5] = {
        {"Pendidikan Olahraga", 1},
        {"Pendidikan Pancasila", 2},
        {"Ilmu Pengetahuan Alam", 3},
        {"Ilmu Pengetahuan Sosial", 4},
        {"Matematika Dasar", 5}
    };

    int jumlah_buku = 5; // Jumlah buku yang diisi dalam array

    //  input judul buku dari pengguna
    printf("Masukkan judul buku yang ingin dicari: ");
    fgets(judul, sizeof(judul), stdin); // Membaca input dengan spasi
    judul[strcspn(judul, "\n")] = 0;    // Menghapus karakter newline di akhir input

    // Mencari buku berdasarkan judul
    for (int i = 0; i < jumlah_buku; i++) {
        if (strcmp(judul, buku[i].judul) == 0) {
            hasil = 1;
            printf("Buku ditemukan!\nJudul: %s\nKode: %d\n", buku[i].judul, buku[i].kode);
            break;
        }
    }

    // Jika buku tidak ditemukan
    if (hasil == 0) {
        printf("Buku tidak ditemukan.\n");
    }

    return 0;
}
