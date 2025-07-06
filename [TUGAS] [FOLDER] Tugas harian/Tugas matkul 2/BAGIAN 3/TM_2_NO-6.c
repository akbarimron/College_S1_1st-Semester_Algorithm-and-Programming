#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 6: Penilaian Bonus Karyawan
Sebuah perusahaan memberikan bonus kepada karyawan berdasarkan kinerja. Jika seorang
karyawan memiliki nilai kinerja lebih dari 80, perusahaan akan memeriksa lamanya bekerja.
Jika karyawan telah bekerja lebih dari 2 tahun, dia akan mendapat bonus penuh. Jika tidak,
bonusnya hanya setengah.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kinerja, lama_bekerja;
    printf("nilai kinerja anda perbulan:");scanf("%d",&kinerja);
    if (kinerja > 80 ) {
        printf("lama anda bekerja (dalam tahun)?!"); scanf("%d", &lama_bekerja);
        if (lama_bekerja > 2) {
            printf("anda menerima bonus 100 persen");            
        }else {
            printf("anda menerima bonus 50 persen");
        }
    } else {
        printf("anda tidak menerima bonus");
    };
   return 0;
}