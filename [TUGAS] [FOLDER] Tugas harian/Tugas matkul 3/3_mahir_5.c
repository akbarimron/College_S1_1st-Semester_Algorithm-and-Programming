#include <stdio.h>
/*
menentukan lama waktu menit"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main(){
int mobil, penumpang;
printf("berapa penumpang : "); scanf("%d",&penumpang);


if (penumpang % 7 == 1) {
    mobil += (penumpang / 7) + 1;
    printf("jumlah mobil = %d", mobil);
} else if (penumpang  % 7 == 0){
    mobil += (penumpang / 7);
    printf("jumlah mobil = %d", mobil);
    }
}