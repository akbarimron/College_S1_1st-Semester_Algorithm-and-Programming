
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
    printf("masukan batas nilai: ");scanf("%d",&A[0]);
     int Terkecil = A[0];
    for(i=1;i <= 5;i++) {
        printf("input nilai ke-%d: ",i);scanf("%d",&A[i]);

        if (A[i] < Terkecil) {
            Terkecil = A[i];
        }
    }
    printf("\n");

    for(i=1;i <= 5;i++) {
        printf("nilai ke-%d = %d \n",i, A[i]);
    }

    printf("Nilai Terkecil adalah: %d", Terkecil);
        return 0;


}