#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 7: Harga Barang Mewah
Sebuah toko mewah menjual barang-barang yang harganya bervariasi. Jika harga barang lebih
dari 1 juta rupiah, pembeli sering menganggap barang tersebut terlalu mahal. Buatlah program
yang memeriksa harga barang dan menampilkan pesan "Harga barang terlalu mahal." jika
harganya melebihi 1 juta rupiah.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int harga_barang;
    printf("harga barang:");scanf("%d",&harga_barang);
    if (harga_barang > 1000000) {
        printf("Harga barang terlalu mahal");
    };
   return 0;
}