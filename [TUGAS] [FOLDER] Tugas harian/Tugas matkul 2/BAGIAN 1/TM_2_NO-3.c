#include <stdlib.h>
#include <stdio.h>
/*
SStudi Kasus 3: Nilai Ujian
Di sebuah sekolah, seorang siswa dianggap lulus ujian jika nilai ujian mereka lebih dari atau
sama dengan 75. Buatlah program yang memeriksa nilai ujian seorang siswa dan menampilkan
pesan "Lulus ujian." jika nilai mereka memenuhi syarat.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024
*/
int main() {
    float nilai;
    printf("input nilai Ujian:");scanf("%f",&nilai);
    if (nilai >= 75) {  
        printf("Nilai anda = %.1f, Lulus Ujian!",nilai);
    }; 
   return 0;
}