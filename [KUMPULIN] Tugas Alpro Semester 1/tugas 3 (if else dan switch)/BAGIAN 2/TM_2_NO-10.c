#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 10: Pemeriksaan Skor Game
Dalam sebuah game, pemain menang jika skornya mencapai 100 poin atau lebih. Jika skornya
mencapai 100 atau lebih, tampilkan "Selamat, Anda menang!" Jika kurang dari itu, tampilkan
"Coba lagi!"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int skor;
    printf("masukan skor anda:");scanf("%d",&skor);
    if (skor >= 100 ) {
        printf("Selamat, anda menang");
    } else {
        printf("Coba lagi");
    };
   return 0;
}