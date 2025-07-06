#include <stdio.h>

struct Mahasiswa {
    char nim[7];
    char nama[20];
    int nilai;
};

int main() {
    int i, n, jumlahNilai = 0;
    float rataRata;
    struct Mahasiswa mhs[100];

    printf("Masukkan jumlah mahasiswa: (maksimum 100) ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Jumlah mahasiswa melebihi batas!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Masukkan data mahasiswa ke-%d\n", i+1);
        printf("NIM: "); scanf("%s", mhs[i].nim);
        printf("Nama: "); scanf("%s", mhs[i].nama);
        printf("Nilai: "); scanf("%d", &mhs[i].nilai);
        jumlahNilai += mhs[i].nilai;
    }

    rataRata = (float)jumlahNilai / n;

    printf("\nRata-rata nilai seluruh mahasiswa: %.2f\n", rataRata);

    return 0;
}