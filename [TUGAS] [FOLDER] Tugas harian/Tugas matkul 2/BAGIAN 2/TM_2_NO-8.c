#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 8: Pembelian umur Bioskop
Seorang pelanggan mendapatkan tiket diskon jika umurnya kurang dari 12 tahun atau lebih
dari 60 tahun. Jika memenuhi salah satu syarat tersebut, tampilkan pesan "Anda mendapat tiket
diskon." Jika tidak, tampilkan pesan "Anda mendapat tiket normal."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int umur;
    printf("masukan umur anda : ");scanf("%d",&umur);
    if (umur < 12 || umur > 60 ) {
        printf("amnda mendapat tiket diskon");
    } else {
        printf("anda mendapat tiket normal");
    };
   return 0;
}