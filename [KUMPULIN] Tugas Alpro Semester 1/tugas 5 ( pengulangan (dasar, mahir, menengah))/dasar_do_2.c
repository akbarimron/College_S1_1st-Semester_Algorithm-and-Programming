/*
Menampilkan bilangan dari batasAwal sampai dengan batasAkhir yang diinput dari alat
masukan dan batasAwal<=batasAkhir berupa bilangan >0.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int batasawal, batasakhir, i;

    printf("batas awal : "); scanf("%d",&batasawal);
    printf("batas akhir : "); scanf("%d",&batasakhir);

    for(i = batasawal; i <= batasakhir; i++) {
        printf("%d\n", i);
    }
}