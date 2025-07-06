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
    int awal, akhir, i, ganjil;

    printf("angka awal : "); scanf("%d", &awal);
    printf("target akhir : "); scanf("%d", &akhir);
i = awal;
do {
    printf("%d ", i);
        i++;
} while(i <=akhir);

     return 0;
    }

/*
while = periksa dulu baru kerjakan
while (i <=akhir); {
     printf("%d ", i);
        i++;

}

do = kerjakan dulu baru periksa
*/

