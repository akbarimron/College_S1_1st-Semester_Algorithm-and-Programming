#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 2: Penjualan Barang 
Toko elektronik memiliki target penjualan 100 unit barang setiap bulan. Buatlah program yang
memeriksa apakah jumlah barang yang terjual dalam sebulan melebihi 100 unit. Jika iya,
tampilkan pesan "Target penjualan tercapai."


Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024


*/
int main() {
    float target;
    printf("masukan penjualan:");scanf("%f",&target);
    if (target > 100) {
        printf("target penjualan = %.0f, target penjualan tercapai!",target);
    }; 
   return 0;
}