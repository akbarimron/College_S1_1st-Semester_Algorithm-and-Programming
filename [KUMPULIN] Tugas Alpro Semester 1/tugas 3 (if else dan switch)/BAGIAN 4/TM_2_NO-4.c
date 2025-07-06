#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 4: Penentuan Jenis Bahan Bakar
Di sebuah SPBU, jenis bahan bakar memiliki kode berbeda: 1 untuk Pertalite, 2 untuk
Pertamax, dan 3 untuk Solar. Buatlah program yang menampilkan jenis bahan bakar
berdasarkan kode yang dimasukkan oleh pengguna.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int jenis_BBM;
    printf("masukan jenis BBM anda (1 = pertalite), (2 = pertamax), (3 = solar): ");scanf("%d",&jenis_BBM);
    switch (jenis_BBM) {
    case 1:printf("anda memilih bahan bakar pertalite\n");   break;
    case 2:printf("anda memilih bahan bakar pertamax\n"); break;
    case 3:printf("anda memilih bahan bakar solar \n"); break;
    default: break;
    }
   return 0;
}