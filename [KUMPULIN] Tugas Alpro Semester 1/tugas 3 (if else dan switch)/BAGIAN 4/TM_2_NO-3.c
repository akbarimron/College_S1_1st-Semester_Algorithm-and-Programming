#include <stdlib.h>
#include <stdio.h>

/*
Studi Kasus 3: Penentuan Mata Uang
Sebuah aplikasi konversi mata uang meminta pengguna untuk memilih negara yang akan
dikonversi ke dalam rupiah. Misalnya, pilih 1 untuk USD, 2 untuk EUR, dan 3 untuk JPY.
Buatlah program yang menampilkan nama mata uang berdasarkan input nomor pilihan
pengguna.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int mata_uang;
    printf("masukan jenis mata uang ( 1 = USD), ( 2 = EUR), (3 = JPY):");scanf("%d",&mata_uang);
    switch (mata_uang) {
    case 1:printf("ANDA MENGONVERSI UANG DARI RUPIAH KE USD\n");   break;
    case 2:printf("ANDA MENGONVERSI UANG DARI RUPIAH KE EUR\n"); break;
    case 3:printf("ANDA MENGONVERSI UANG DARI RUPIAH KE JPY\n"); break;
    default: break;
    } 
   return 0;
}