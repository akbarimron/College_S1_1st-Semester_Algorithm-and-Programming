/*
JUMLAHKAN

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int batasawal, batasakhir, i, bilangan, jumlah = 0;

    printf("batas awal : "); scanf("%d",&batasawal);
    printf("batas akhir : "); scanf("%d",&batasakhir);

    for(i = batasawal; i <= batasakhir; i++) {;
        jumlah += i;
             printf("%d\n", i);
    }
       printf("%d", jumlah);
}