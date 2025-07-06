#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 6: Penentuan Status Pengiriman
Sebuah perusahaan ekspedisi memiliki kode status pengiriman barang. 1 untuk "Dalam
perjalanan", 2 untuk "Tiba di tujuan", 3 untuk "Sedang dikirim". Buatlah program yang
menampilkan status pengiriman berdasarkan kode yang dimasukkan.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int status_pengiriman;
    printf("status pengiriman barang");scanf("%d",&status_pengiriman);
    switch (status_pengiriman) {
    case 1:printf("Dalam perjalanan \n");   break;
    case 2:printf("Tiba di tujuan\n"); break;
    case 3:printf(" sedang dikirim \n"); break;
    default: break;
    }
   return 0;
}