#include <stdlib.h>
#include <stdio.h>

/*
menentukan titik kuadran"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int x,y;
    printf("x = : "); scanf("%d",&x);
    printf("y = : "); scanf("%d",&y);
    
    
    if (x > 0 && y > 0) {
        printf("KUADRAN SATU (%d, %d)", x,y);
    } if (x < 0  && y > 0) {
        printf("KUADRAN DUA (%d, %d)", x,y);
    } if (x < 0  && y < 0) {
        printf("KUADRAN TIGA (%d, %d)", x,y);
    } if (x > 0 && y < 0) {
        printf("KUADRAN EMPAT (%d, %d)", x,y);
    }   

   return 0;
}