#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    int nim;
    char nama[20];
    int nilai;
};

int main() {
    int i, n;
    struct Mahasiswa mhs[100], mahasiswaDenganNilaiTertinggi;
    int maxNilai = 0;

    printf("Masukkan jumlah mahasiswa (maksimum 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Jumlah mahasiswa melebihi batas!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);
        printf("NIM: ");
        scanf("%d", &mhs[i].nim);
        printf("Nama: ");
        scanf(" %19s", mhs[i].nama); // Membatasi input nama hingga 19 karakter
        printf("Nilai: ");
        scanf("%d", &mhs[i].nilai);
    }

    // Inisialisasi mahasiswa dengan nilai tertinggi
    mahasiswaDenganNilaiTertinggi = mhs[0];
    maxNilai = mhs[0].nilai;

    for (i = 1; i < n; i++) {
        if (mhs[i].nilai > maxNilai) {
            maxNilai = mhs[i].nilai;
            mahasiswaDenganNilaiTertinggi = mhs[i];
        }
    }

    printf("\nData Mahasiswa:\n");
    for (i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("NIM: %d\n", mhs[i].nim);
        printf("Nama: %s\n", mhs[i].nama);
        printf("Nilai: %d\n", mhs[i].nilai);
    }

    printf("\nMahasiswa dengan nilai tertinggi:\n");
    printf("NIM: %d\n", mahasiswaDenganNilaiTertinggi.nim);
    printf("Nama: %s\n", mahasiswaDenganNilaiTertinggi.nama);
    printf("Nilai: %d\n", maxNilai);

    return 0;
}
