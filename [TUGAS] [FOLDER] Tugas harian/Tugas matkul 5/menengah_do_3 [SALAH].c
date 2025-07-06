/*
Menghitung rata-rata dari bilangan yang diinput dari alat masukan sebanyak n buah

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>


int main() {
    float batasAwal, batasAkhir, jumlah = 0,ratarata, jumlah1 = 0, i;

    printf("Masukkan batas awal: ");scanf("%f", &batasAwal);
    printf("Masukkan batas akhir: ");scanf("%f", &batasAkhir);

    if (batasAwal > batasAkhir) {
        printf("Batas awal harus lebih kecil dari batas akhir.\n");
        return 1;
    }
    for (i = batasAwal; i <= batasAkhir; i++) {
            jumlah += i;
            jumlah1 = jumlah1 + 1;
            printf("%.0f ", i);
    }

    ratarata = jumlah / jumlah1;
    printf("\n ada %.0f bilangan", jumlah1);
    printf("\n Jumlah deret bilangan ganjil antara %.0f dan %.0f adalah %.0f\n", batasAwal, batasAkhir, jumlah);
    printf("rata rata nya adalah %.2f", ratarata);

    return 0;
}