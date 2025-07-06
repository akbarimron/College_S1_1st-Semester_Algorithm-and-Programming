#include <stdlib.h>
#include <stdio.h>

/*
menentukan bilangan positif dan negatif"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int bilangan;
    printf("masukan bilangan:"); scanf("%d",&bilangan);
    if (bilangan >= 0) {
        printf("%d adalah bilangan Positif", bilangan);
    } else {
        printf("%d adalah bilangan negatif ", bilangan);
    }
   return 0;
}