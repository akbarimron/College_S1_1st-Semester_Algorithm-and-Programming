#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 3: Pemesanan Tiket Pesawat
Dalam sistem pemesanan tiket pesawat, penumpang bisa mendapatkan potongan harga. Jika
penumpang memesan tiket lebih dari 30 hari sebelum keberangkatan, mereka berhak
mendapatkan diskon 10%. Namun, jika penumpang juga merupakan anggota program loyalitas
maskapai, diskon yang diberikan menjadi 20%. Buatlah program yang memeriksa kedua
kondisi ini.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int tiket_hari_keberangkatan, anggota;
    printf("berapa hari sejak anda terakhir membeli tiket:");scanf("%d",&tiket_hari_keberangkatan);
    if (tiket_hari_keberangkatan >  30) {  
        printf("apakah anda anggota program loyalitas (yes = 1) :"); scanf("%d",&anggota);
        if (anggota == 1) {
            printf("anda berhak menerima diskon 20 persen");
        } else {
            printf("anda berhak menerima diskon 10 persen");
        };
    } else {
        printf("anda tidak berhak menerima diskon");
    }; 
   return 0;
}