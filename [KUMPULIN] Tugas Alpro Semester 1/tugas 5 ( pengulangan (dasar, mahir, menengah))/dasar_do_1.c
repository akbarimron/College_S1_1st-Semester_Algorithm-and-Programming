/*
1. Menampilkan bilangan dari satu sampai dengan n, dimana n diinput dari alat masukan, n>=1

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int bilangan, i;

    printf("input berapa banyak bilangan yang akan di print: "); scanf("%d",&bilangan);

    for(i = 0; i <= bilangan; i++) {
        printf("%d\n", i);
    }
}