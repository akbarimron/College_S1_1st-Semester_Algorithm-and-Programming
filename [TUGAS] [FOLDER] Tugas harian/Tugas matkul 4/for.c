#include <stdlib.h>
#include <stdio.h>

/*
contoh materi for"
2. cari berapa banyak bilangan ganjil

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int awal, akhir, i, ganjil,jumlah = 0;

    printf("angka awal : "); scanf("%d", &awal);
    printf("target akhir : "); scanf("%d", &akhir);
   
    for (i=awal;i <= akhir; i++) {
        ganjil = i % 2;
        if (ganjil != 0) {
            jumlah = jumlah + 1;
            printf("%d ",i);
        } 
    }
     printf("\n%d bilangan ganjil",jumlah);
     return 0;
    }


// jam tsb + 12 