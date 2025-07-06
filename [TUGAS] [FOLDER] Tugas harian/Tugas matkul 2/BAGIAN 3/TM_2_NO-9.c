#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 9: Keputusan Kenaikan Jabatan
Seorang karyawan hanya bisa naik jabatan jika nilai kinerja tahunannya lebih dari 90. Jika
memenuhi syarat, perusahaan juga akan memeriksa kehadiran. Jika karyawan memiliki tingkat
kehadiran lebih dari 95%, dia mendapatkan promosi. Jika tidak, promosi tidak diberikan.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kinerja, kehadiran;
    printf("nilai kinerja anda : ");scanf("%d",&kinerja);
    if (kinerja > 90 ) {
        printf("berapa tingkat kehadiran anda: "); scanf("%d", &kehadiran);
        if (kehadiran > 95) {
            printf("anda mendapat promosi"); 
        }else {
            printf("anda tidak mendapat promosi");
        }
    } else {
        printf("anda tidak mendapat promosi");
    };
   return 0;
}