/*Dalam 1 minggu terdapat 7 hari. Buatlah program nomer hari dalam Bahasa C ini merupakan
materi switch.*/
#include <stdlib.h>
#include <stdio.h>


int main() {
    int hari;
    printf("masukan nomor hari kerja ( 1 - 7):");scanf("%d",&hari);
    switch (hari) {
    case 1:printf("senin\n");   break;
    case 2:printf("selasa\n"); break;
    case 3:printf("rabu\n"); break;
    case 4:printf("kamis\n"); break;
    case 5:printf("jumat\n"); break;
    case 6:printf("kamis\n"); break;
    case 7:printf("Minggu\n"); break;
    default: break;
    } 
   return 0;
}