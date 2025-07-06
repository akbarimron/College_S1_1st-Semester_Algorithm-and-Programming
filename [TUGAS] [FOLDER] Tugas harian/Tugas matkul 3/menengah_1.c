#include <stdlib.h>
#include <stdio.h>

/*
tentukan bilangan lebih besar atau lebih kecil"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int bilangan1, bilangan2;
    printf("masukan bilangan satu: "); scanf("%d",&bilangan1);
    printf("masukan bilangan kedua: "); scanf("%d",&bilangan2);
    if (bilangan1 > bilangan2) {
        printf("bilangan satu = %d lebih besar dari bilangan dua = %d", bilangan1, bilangan2);
    } else if (bilangan1 == bilangan2){
        printf("bilangan satu = %d sama dengan bilangan dua = %d", bilangan1, bilangan2);
    } else if (bilangan1 < bilangan2){
        printf("bilangan satu = %d lebih kecil dari bilangan dua = %d", bilangan1, bilangan2);
    }
   return 0;
}