#include <stdlib.h>
#include <stdio.h>
/*
Studi Kaus 5: Umur untuk Memilih
Seorang warga negara hanya boleh memilih dalam pemilihan umum jika mereka berumur 18
tahun ke atas. Buatlah program yang memeriksa umur seseorang dan menampilkan pesan
"Anda sudah cukup umur untuk memilih." jika mereka berumur 18 tahun atau lebih.


Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int umur;
    printf("Umur anda:");scanf("%d",&umur);
    if (umur >= 18) {
        printf("Anda sudah cukup umur untuk memilih!");
    };
   return 0;
}