#include <stdlib.h>
#include <stdio.h>

/*
Sebuah bank ingin memeriksa kelayakan pinjaman. Nasabah hanya bisa mendapatkan
pinjaman jika usianya lebih dari 21 tahun. Jika usia nasabah lebih dari 21 tahun, bank juga akan
memeriksa penghasilan. Jika penghasilannya lebih dari Rp5.000.000 per bulan, pinjaman
disetujui. Jika tidak, pinjaman ditolak. Buatlah program yang memeriksa kedua kondisi ini.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    float usia, penghasilan;
    printf("masukan usia :");scanf("%f",&usia);
    if (usia  > 21) {
        printf("masukan penghasilan anda perbulan: "); scanf("%f",&penghasilan);
        if (penghasilan > 5000000) {
            printf("pinjaman anda disetujui");
        } else {
            printf("pinjaman anda ditolak");
        } 
    } else {
        printf("usia anda tidak mencukupi");
    }
   return 0;
}