/*
Buatlah program bahasa C untuk menghitung tarif parkir.Biaya parkir Rp.7000 per jam untuk mobil, dan Rp.5000 untuk motor. User bisa memilih apakah ingin memarkir mobil atau motor. Setelah itu input jam masuk dan jam keluar. Hasil akhir berupa jumlah biaya yang harus dibayarkan..
*/

#include <stdio.h>

int main() {
    int jammasuk, jamkeluar, lamabekerja1,jenisKendaraan,biaya ;
    printf("Pilih jenis kendaraan (1. Mobil, 2. Motor): "); scanf("%d",&jenisKendaraan);
    printf("jam masuk anda : "); scanf("%d",&jammasuk);
    printf("jam keluar anda  :"); scanf("%d",&jamkeluar);
    
 if (jamkeluar > jammasuk) {
    lamabekerja1 = jamkeluar - jammasuk; 
    printf("anda bekerja selama %d jam", lamabekerja1);
    if (jenisKendaraan == 1) {
        biaya = lamabekerja1 * 7000;
        printf("\nBiaya parkir anda: Rp.%d", biaya);
    }else if (jenisKendaraan == 2) {
            biaya = lamabekerja1 * 5000;
             printf("\nBiaya parkir anda: Rp.%d", biaya);
        }

 } else {
    lamabekerja1 = (jamkeluar+12) - jammasuk; 
    printf("anda bekerja selama %d jam", lamabekerja1);
     if (jenisKendaraan == 1) {
        biaya = lamabekerja1 * 7000;
        printf("\nBiaya parkir anda: Rp.%d", biaya);
    }else if (jenisKendaraan == 2) {
        biaya = lamabekerja1 * 5000;
         printf("\nBiaya parkir anda: Rp.%d", biaya);
        }
 }

   return 0;
}
