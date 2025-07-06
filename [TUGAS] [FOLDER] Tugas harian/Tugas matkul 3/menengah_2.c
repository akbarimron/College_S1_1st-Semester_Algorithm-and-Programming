#include <stdlib.h>
#include <stdio.h>

/*
tentukan bilangan lebih besar atau lebih kecil"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int a, b, c, D;
    printf(" D = (b x b) - (4 x a x c) \n");
    printf("masukan bilangan a: "); scanf("%d",&a);
    printf("masukan bilangan b: "); scanf("%d",&b);
    printf("masukan bilangan c: "); scanf("%d",&c);


D = (b * b) - (4*a*c);

    if (D > 0) {
        printf("Real Berbeda");
    } else if (D == 0){
        printf("Real sama");
    } else if (D < 0){
        printf("imaginer");
    }
   return 0;
}