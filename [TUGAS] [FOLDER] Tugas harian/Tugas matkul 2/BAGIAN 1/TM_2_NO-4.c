#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 4: Jumlah Penumpang Bus
Sebuah bus kota memiliki kapasitas maksimal 50 penumpang. Buatlah program yang
memeriksa jumlah penumpang dalam bus. Jika jumlah penumpang melebihi 50, program akan
menampilkan pesan "Bus penuh."


Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int Penumpang;
    printf("Jumlah Penumpang:");scanf("%d",&Penumpang);
    if (Penumpang > 50) {
        printf("Bus Penuh!");
    };
   return 0;
}