#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 4: Pemeriksaan Nilai Mata Kuliah
Seorang mahasiswa harus lulus dua mata kuliah untuk mendapatkan gelar. Jika nilai mata
kuliah pertama lebih dari 70, periksa nilai mata kuliah kedua. Jika nilai mata kuliah kedua juga
lebih dari 70, mahasiswa dinyatakan lulus. Jika tidak, mahasiswa dinyatakan tidak lulus.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int nilai_matkul1, nilai_matkul2;
    printf("masukan nilai matkul pertama anda:");scanf("%d",&nilai_matkul1);
    if (nilai_matkul1 > 70) {
        printf("masukan nilai matkul kedua anda :!"); scanf("%d",&nilai_matkul2);
        if (nilai_matkul2 > 70) {
            printf("anda lulus");
        } else {
            printf("anda tidak lulus");
        }
    } else {
        printf("anda tidak lulus");
    };
   return 0;
}