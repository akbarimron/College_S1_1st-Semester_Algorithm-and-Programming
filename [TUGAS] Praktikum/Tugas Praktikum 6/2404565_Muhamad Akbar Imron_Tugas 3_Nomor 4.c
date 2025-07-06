/*
JUMLAHKAN

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main ( ) {
    int  i,  j, n, hasil;

    printf("N : "); scanf("%d",&n);
    

    for(i = 1; i <= n + 1; i++) {;
        for(j = 1; j <= n;j++) {
            if (i > j) {
                 printf("%d", j);
            }
         
    }
    printf("\n");
    }
    return 0;
}