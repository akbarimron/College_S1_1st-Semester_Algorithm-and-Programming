#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 10: Pemberian Diskon di Toko
Sebuah toko memberikan diskon kepada pelanggan jika mereka berbelanja lebih dari
Rp500.000. Jika pelanggan memenuhi syarat, toko juga akan memeriksa apakah pelanggan
adalah anggota VIP. Jika pelanggan adalah anggota VIP, mereka mendapatkan diskon
tambahan. Jika tidak, mereka hanya mendapatkan diskon biasa.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int harga_belanja, jenis_anggota;
    printf("nilai harga belanja anda : ");scanf("%d",&harga_belanja);
    if (harga_belanja > 500000 ) {
        printf("apakah anda anggota VIP ? (yes = 1): "); scanf("%d", &jenis_anggota);
        if (jenis_anggota == 1) {
            printf("anda mendapat diskon tambahan"); 
        }else {
            printf("anda mendapat diskon biasa");
        }
    } else {
        printf("anda tidak mendapat diskon");
    };
   return 0;
}