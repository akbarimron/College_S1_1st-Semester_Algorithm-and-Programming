#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 10: Penentuan Kelas Hotel
Sebuah situs pemesanan hotel menampilkan kelas hotel yang dipilih pengguna. 1 untuk
"Bintang 1", 2 untuk "Bintang 3", 3 untuk "Bintang 5". Buatlah program yang menampilkan
kelas hotel berdasarkan kode yang dimasukkan oleh pengguna.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kelas_hotel;
    printf("masukan kelas hotel anda (1 = bintang 1) (2 = bintang 3) (3 = bintang 5)");scanf("%d",&kelas_hotel);
    switch (kelas_hotel) {
    case 1:printf("anda memilih hotel bintang 1\n");   break;
    case 2:printf("anda memilih hotel bintang 3\n"); break;
    case 3:printf(" anda memilih hotel bintang 5\n"); break;
    default: break;
    }
   return 0;
}