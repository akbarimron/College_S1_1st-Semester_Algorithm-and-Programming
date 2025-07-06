#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 8: Kecepatan Kendaraan
Di sebuah jalan raya, batas kecepatan maksimal adalah 80 km/jam. Buatlah program yang
memeriksa kecepatan kendaraan. Jika kecepatan kendaraan melebihi 80 km/jam, tampilkan
pesan "Anda melebihi batas kecepatan."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kecepatan;
    printf("Masukan kecepatan (dalam km/jam):");scanf("%d",&kecepatan);
    if (kecepatan > 80 ) {
        printf("anda melebihi batas kecepatan"   
);
    };
   return 0;
}