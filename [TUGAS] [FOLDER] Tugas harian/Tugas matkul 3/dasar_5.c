#include <stdlib.h>
#include <stdio.h>

/*
menentukan nama hari berdasarkan no_hari yang diiinput!"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int hari;
    printf("masukan nomor hari( 1 - 7):");scanf("%d",&hari);
    switch (hari) {
    case 1:printf("senin\n");   break;
    case 2:printf("selasa\n"); break;
    case 3:printf("rabu\n"); break;
    case 4:printf("kamis\n"); break;
    case 5:printf("jumat\n"); break;
    case 6:printf("jumat\n"); break;
    case 7:printf("jumat\n"); break;
    default: break;
    } 
   return 0;
}