
/*
Mencari nilai   rata rata

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
    int totnil = 0;
    for(i=1;i <= 5;i++) {
        printf("input nilai ke-%d: ",i);scanf("%d",&A[i]);
    totnil = totnil + A[i];
    }
    totnil = totnil / (i - 1);
    printf("\n");

    for(i=1;i <= 5;i++) {
        printf("nilai ke-%d = %d \n",i, A[i]);
    }
    printf("rata rata nya adalah : %d",totnil);
        return 0;


}