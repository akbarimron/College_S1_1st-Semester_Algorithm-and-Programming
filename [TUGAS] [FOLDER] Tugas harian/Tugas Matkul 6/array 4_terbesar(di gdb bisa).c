#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nim[7];
    char nama[20];
    int nilai;
};

int main() {
    int i, n;
    struct Mahasiswa mhs[100], mahasiswaDenganNilaiTertinggi,nimmahasiswa ;;
    int maxNilai = 0;
    

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
    }

  maxNilai = mhs[0].nilai;
    mahasiswaDenganNilaiTertinggi = mhs[0]; // ini salah, karena mhs[0] bukanlah pointer

    for (i = 1; i < n; i++) {
        if (mhs[i].nilai > maxNilai) {
            maxNilai = mhs[i].nilai;
            mahasiswaDenganNilaiTertinggi = mhs[i];
              nimmahasiswa = mhs[i];
        }
    }




    printf("\nData Mahasiswa:\n");
    for (i = 0; i < n; i++) {
        printf("Mahasiswa ke-%d\n", i+1);
        printf("NIM: %s\n", mhs[i].nim);
        printf("Nama: %s\n", mhs[i].nama);
        printf("Nilai: %d\n", mhs[i].nilai);
    }

     printf("\nMahasiswa dengan nilai tertinggi:\n");
        printf("NIM: %s\n", nimmahasiswa.nim);
    printf("Nama: %s\n", mahasiswaDenganNilaiTertinggi.nama);
    printf("Nilai: %d\n", maxNilai);

    return 0;
}