/*
Menghitung n!, dimana n>=0, 0!=1, dengan tampilan sebagai berikut, jika diinput n=5, maka
keluarannya harus 5!=5*4*3*2*1=120

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

        if (i == 1) {
            bilangan = bilangan * i;
             printf("%d ", i);
        } else {
             bilangan = bilangan * i;
             printf("%d * ", i);
        }
        
    }

    printf("= %d", bilangan);
}