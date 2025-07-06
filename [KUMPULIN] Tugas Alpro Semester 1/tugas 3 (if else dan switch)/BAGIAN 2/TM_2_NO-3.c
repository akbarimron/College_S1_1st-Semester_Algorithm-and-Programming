#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 3: Nilai Kelulusan Siswa
Seorang siswa lulus jika nilai ujian lebih dari atau sama dengan 75. Jika nilainya 75 atau lebih,
tampilkan "Lulus." Jika kurang dari 75, tampilkan "Tidak lulus."


Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    float nilai;
    printf("input nilai Ujian:");scanf("%f",&nilai);
    if (nilai >= 75) {  
        printf("Lulus");
    } else {
        printf("Tidak Lulus");
    }; 
   return 0;
}