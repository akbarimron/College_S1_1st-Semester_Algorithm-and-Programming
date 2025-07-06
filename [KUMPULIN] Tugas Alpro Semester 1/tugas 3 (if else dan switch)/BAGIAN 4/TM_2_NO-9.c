#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 9: Penentuan Transportasi Umum
Seorang pengguna aplikasi transportasi memilih kode transportasi yang akan digunakan. Kode
1 untuk "Bus", 2 untuk "Kereta", dan 3 untuk "Taksi". Buatlah program yang menampilkan
jenis transportasi yang dipilih berdasarkan kode yang dimasukkan.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kode_transportasi;
    printf("masukan kode transportasi (1 = bus) (2 = kereta) (3 = taksi)");scanf("%d",&kode_transportasi);
    switch (kode_transportasi) {
    case 1:printf("anda memilih BUS \n");   break;
    case 2:printf("anda memilih KERETA\n"); break;
    case 3:printf(" anda memilih TAKSI\n"); break;
    default: break;
    }
   return 0;
}