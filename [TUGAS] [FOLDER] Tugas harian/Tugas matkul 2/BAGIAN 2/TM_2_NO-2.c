#include <stdlib.h>
#include <stdio.h>
/*
Sebuah toko online memberikan diskon jika jumlah pembelian lebih dari 3 barang. Jika jumlah
barang yang dibeli lebih dari 3, pelanggan mendapat pesan "Anda mendapat diskon." Jika
tidak, tampilkan pesan "Tidak ada diskon."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024


*/
int main() {
    float produk_terjual;
    printf("masukan penjualan:");scanf("%f",&produk_terjual);
    if (produk_terjual > 3) {
        printf("anda mendapat diskon");
    } else {
        printf("Tidak ada diskon");
    } 
   return 0;
}