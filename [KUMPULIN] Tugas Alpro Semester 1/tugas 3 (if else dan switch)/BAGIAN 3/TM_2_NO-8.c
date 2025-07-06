#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 8: Pendaftaran Beasiswa
Seorang siswa hanya bisa mendaftar beasiswa jika nilai rata-rata lebih dari 85. Jika memenuhi
syarat, program juga akan memeriksa kegiatan ekstrakurikuler. Jika siswa aktif di kegiatan
ekstrakurikuler, dia bisa mendapatkan beasiswa penuh. Jika tidak, dia hanya bisa mendapatkan
beasiswa sebagian.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    float rata_rata, ekstrakutikuler;
    printf("nilai rata_rata anda : ");scanf("%f",&rata_rata);
    if (rata_rata > 85 ) {
        printf("apakah anda aktif kegiatan ekstrakurikuler? (yes = 1)"); scanf("%f", &ekstrakutikuler);
        if (ekstrakutikuler == 1) {
            printf("anda mendapat beasiswa full"); 
        }else {
            printf("anda mendapat beasiswa sebagian");
        }
    } else {
        printf("anda tidak layak mendapatkan beasiswa");
    };
   return 0;
}