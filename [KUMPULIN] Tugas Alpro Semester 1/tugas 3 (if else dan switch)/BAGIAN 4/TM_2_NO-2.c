#include <stdlib.h>
#include <stdio.h>

/*
Studi Kasus 2: Penentuan Diskon di Restoran
Di sebuah restoran, pelanggan mendapatkan diskon berbeda berdasarkan hari mereka datang.
Jika mereka datang pada Senin, mereka mendapatkan diskon 10%, Selasa 15%, dan Rabu 20%.
Buatlah program yang menentukan besaran diskon berdasarkan nama hari yang dipilih.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int hari_kedatangan;
    printf("masukan nomor kedatangan ( 1 = senin), ( 2 = selasa), (3 = rabu):");scanf("%d",&hari_kedatangan);
    switch (hari_kedatangan) {
    case 1:printf("anda mendapat 10 persen diskon (senin)\n");   break;
    case 2:printf("anda mendapat 20 persen diskon (selasa)\n"); break;
    case 3:printf("anda mendapat 30 persen diskon (rabu)\n"); break;
    default: break;
    } 
   return 0;
}