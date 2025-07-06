#include <stdlib.h>
#include <stdio.h>

/*
menentukan bilangan ganjil dan genap"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
*/
int main() {
    int bilangan, ganjil;
    printf("masukan bilangan:"); scanf("%d",&bilangan);
    ganjil = bilangan % 2;
    if (ganjil != 0) {
        printf("%d adalah bilangan ganjil", bilangan);
    }
   return 0;
}