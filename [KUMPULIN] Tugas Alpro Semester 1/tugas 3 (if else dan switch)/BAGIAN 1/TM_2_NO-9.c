#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 9: Berat Badan Ideal
Di sebuah gym, pelatih ingin memeriksa apakah berat badan seorang anggota melebihi 70 kg.
Jika beratnya lebih dari 70 kg, pelatih akan memberikan tips khusus. Buatlah program yang
memeriksa berat badan anggota dan menampilkan pesan "Berat badan di atas rata-rata." jika
berat lebih dari 70 kg.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int Berat_badan;
    printf("Masukan berat badan anda:");scanf("%d",&Berat_badan);
    if (Berat_badan > 70 ) {
        printf("Berat badan di atas rata-rata");
    };
   return 0;
}