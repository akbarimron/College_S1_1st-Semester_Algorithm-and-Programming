#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 7: Penentuan Skor Game
Dalam sebuah permainan, skor akhir pemain dapat dikategorikan. Jika pemain mendapatkan 1,
dia dianggap "Pemula", jika 2, dia "Menengah", dan jika 3, dia "Ahli". Buatlah program yang
menentukan kategori pemain berdasarkan skor akhir yang didapat.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int hasil_peermainan;
    printf("Berapa hasil permainan anda");scanf("%d",&hasil_peermainan);
    switch (hasil_peermainan) {
    case 1:printf("pemula \n");   break;
    case 2:printf("mennegah\n"); break;
    case 3:printf(" Ahli \n"); break;
    default: break;
    }
   return 0;
}