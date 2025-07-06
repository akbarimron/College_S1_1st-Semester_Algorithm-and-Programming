/*
1. Menghitung n!, dimana n>=0, 0!=1

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int bilangan = 1, i, jumlah;

    printf(" INPUT BILANGAN : "); scanf("%d",&jumlah);

    for(i = jumlah; i > 0; i--) {
        bilangan = bilangan * i;
        printf("%d ", i);
    }

    printf("\nNilai faktorial %d adalah %d\n", jumlah, bilangan);
}