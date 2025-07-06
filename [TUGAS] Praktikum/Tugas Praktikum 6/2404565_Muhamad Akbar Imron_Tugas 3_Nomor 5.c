/*
Bilangan ganjil

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int n, i, bilangan, bilangan2, bilangan3,bilangan4,bilangan5,bilangan6,bilangan7,bilangan8, j, bilanganprima;

    printf("N: "); scanf("%d",&n);

    for(i = 2; i <= n; i++) {
        bilangan = i % 2;
        bilangan2 = i % 3;
        bilangan3 = i % 4;
        bilangan4 = i % 5;
        bilangan5 = i % 6;
        bilangan6 = i % 7;
        bilangan7 = i % 8;

        if (i < 9) {
            bilanganprima = i % 2;
            if (i == 2) {
                printf("2\n");
            }
            else if (bilanganprima != 0 || bilangan == 2) {
             printf("%d\n", i);
        }
       
        } else if (bilangan != 0 && bilangan2 != 0 && bilangan3 != 0 && bilangan4 != 0 && bilangan5 != 0 && bilangan6 != 0 && bilangan7 != 0) {
             printf("%d\n", i);
        }

       
    
    }
    return 0;
}