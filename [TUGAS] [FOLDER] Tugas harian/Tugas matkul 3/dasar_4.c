#include <stdlib.h>
#include <stdio.h>

/*
menentukan apakah a kelipatan b, a dan b adalah integer yang diinput"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int bilangan1, bilangan2, identifikasi;
    printf("Menentukan apakah bilangan satu, merupakan kelipatan dari bilangan dua\n");
    printf("masukan bilangan satu: "); scanf("%d",&bilangan1);
    printf("masukan bilangan kedua: "); scanf("%d",&bilangan2);
identifikasi = bilangan1 % bilangan2;

    if (identifikasi == 0) {
        printf("ya, bilangan satu (%d) adalah kelipatan dari bilangan dua (%d)", bilangan1, bilangan2);
    } else {
        printf("tidak, bilangan satu (%d) bukan merupakan kelipatan dari bilangan dua (%d)", bilangan1, bilangan2);
    }
   return 0;
}