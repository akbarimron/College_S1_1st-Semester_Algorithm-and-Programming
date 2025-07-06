#include <stdlib.h>
#include <stdio.h>

/*
menentukan bilangan terbesar"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int x, y, z;
    
    printf("masukan bilangan x: "); scanf("%d",&x);
    printf("masukan bilangan y: "); scanf("%d",&y);
    printf("masukan bilangan z:  "); scanf("%d",&z);


    if ( x > y && x > z && y > z) {
        printf("urutan dari yang terbesar ke terkecil adalah x=%d  y=%d  z=%d ", x,y,z);
    } if ( x > y && x > z && z > y ) {
        printf("urutan dari yang terbesar ke terkecil adalah  x=%d z=%d y= %d",x,z,y);

    } if ( y > x && y > z && x > z) {
        printf("urutan dari yang terbesar ke terkecil adalah  y=%d x=%d z=%d ",y,x,z);
    } if ( y > x && y > z && z > x) {
        printf("urutan dari yang terbesar ke terkecil adalah  y=%d z=%d x=%d ",y,z,x);

    } if ( z > x && z > y && x > y) {
        printf("urutan dari yang terbesar ke terkecil adalah  z=%d x=%d y=%d ", z,x,y);
    } if ( z > y && z > x && y > x) {
        printf("urutan dari yang terbesar ke terkecil adalah  z=%d y=%d x=%d ",z,y,x);
    }
   return 0;
}