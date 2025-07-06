/*
Menampilkan bilangan yang habis dibagi 5 dari batasAwal dan batasAkhir yang diinput dari
alat masukan..

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int batasawal, batasakhir, i, bilangan;

    printf("batas awal : "); scanf("%d",&batasawal);
    printf("batas akhir : "); scanf("%d",&batasakhir);

    for(i = batasawal; i <= batasakhir; i++) {
        bilangan = i % 5;
        if (bilangan == 0) {
             printf("%d\n", i);
        }
       
    }
}