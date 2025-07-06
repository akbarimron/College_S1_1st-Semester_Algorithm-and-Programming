
/*
Mencari nilai   terkecil

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/



#include <stdio.h>
#include <stdlib.h>
int n=5;
int main() {
    int i;
    int A[n];
    int terbesar = A[0];
    for(i=1;i <= 5;i++) {
        printf("input nilai ke-%d: ",i);scanf("%d",&A[i]);

        if (A[i] > terbesar) {
            terbesar = A[i];
        }
    }
    printf("\n");

    for(i=1;i <= 5;i++) {
        printf("nilai ke-%d = %d \n",i, A[i]);
    }

    printf("Nilai terbesar adalah: %d", terbesar);
        return 0;


}