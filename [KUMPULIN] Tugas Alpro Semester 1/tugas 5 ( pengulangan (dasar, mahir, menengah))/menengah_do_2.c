/*
Menampilkan jumlah deret bilangan ganjil dari batasAwal dan batasAkhir yang
diinput dari alat masukan

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>


int main() {
    int batasAwal, batasAkhir, jumlah = 0;

    printf("Masukkan batas awal: ");scanf("%d", &batasAwal);

    printf("Masukkan batas akhir: ");scanf("%d", &batasAkhir);

    if (batasAwal > batasAkhir) {
        printf("Batas awal harus lebih kecil dari batas akhir.\n");
        return 1;
    }

    
    for (int i = batasAwal; i <= batasAkhir; i++) {
        if (i % 2 != 0) {
            jumlah += i;
            printf("%d ", i);
        }
    }

    printf("\n Jumlah deret bilangan ganjil antara %d dan %d adalah %d\n", batasAwal, batasAkhir, jumlah);

    return 0;
}