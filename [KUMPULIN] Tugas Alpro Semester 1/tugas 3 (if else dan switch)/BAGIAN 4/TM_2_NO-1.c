#include <stdlib.h>
#include <stdio.h>

/*
Studi Kasus 1: Penentuan Hari Kerja
Sebuah perusahaan memiliki sistem absensi yang menampilkan hari kerja karyawan
berdasarkan nomor hari. Misalnya, 1 untuk Senin, 2 untuk Selasa, dan seterusnya hingga 5
untuk Jumat. Buatlah program yang menampilkan nama hari kerja berdasarkan nomor hari
yang diberikan.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int hari_kerja;
    printf("masukan nomor hari kerja ( 1 - 5):");scanf("%d",&hari_kerja);
    switch (hari_kerja) {
    case 1:printf("senin\n");   break;
    case 2:printf("selasa\n"); break;
    case 3:printf("rabu\n"); break;
    case 4:printf("kamis\n"); break;
    case 5:printf("jumat\n"); break;
    default: break;
    } 
   return 0;
}