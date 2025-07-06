#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 5: Kelayakan Beli Rumah
Sebuah program bantuan pemerintah untuk pembelian rumah hanya diberikan kepada warga
yang memiliki penghasilan kurang dari Rp10.000.000 per bulan. Jika warga memenuhi syarat
penghasilan, bantuan hanya diberikan jika mereka belum memiliki rumah. Buatlah program
yang memeriksa kedua kondisi ini.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int penghasilan, memiliki_rumah;
    printf("penghasilan anda perbulan:");scanf("%d",&penghasilan);
    if (penghasilan < 10000000 ) {
        printf("belum memiliki rumah? (yes = 1)!");scanf("%d", &memiliki_rumah);
        if (memiliki_rumah = 1){
            printf("anda layak menerima bantuan");            
        }else {
            printf("anda sudah memiliki rumah");
        }
        
    } else {
        printf("anda tidak layak menerima bantuan");
    };
   return 0;
}