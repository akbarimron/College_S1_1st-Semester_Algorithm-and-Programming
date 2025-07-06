#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 10: Jam Kerja Karyawan
Seorang karyawan harus bekerja 8 jam sehari. Jika karyawan bekerja lebih dari 8 jam, mereka
dianggap bekerja lembur. Buatlah program yang memeriksa jam kerja seorang karyawan dan
menampilkan pesan "Anda bekerja lembur." jika mereka bekerja lebih dari 8 jam dalam sehari.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int jam_kerja;
    printf("Masukan jam kerja anda:");scanf("%d",&jam_kerja);
    if (jam_kerja > 8 ) {
        printf("Banda bekerja lembur");
    };
   return 0;
}