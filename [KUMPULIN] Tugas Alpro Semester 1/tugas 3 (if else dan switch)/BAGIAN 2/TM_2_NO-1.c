#include <stdlib.h>
#include <stdio.h>

/*
Studi Kasus 1: Pemeriksaan Suhu Tubuh
Di rumah sakit, pasien yang memiliki suhu tubuh di atas 37°C dianggap demam, sedangkan
yang di bawahnya dianggap sehat. Buatlah program yang memeriksa suhu tubuh pasien. Jika
suhu lebih dari 37°C, tampilkan "Anda demam." Jika tidak, tampilkan "Suhu tubuh normal."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    float suhu;
    printf("masukan suhu anda:");scanf("%f",&suhu);
    if (suhu > 37) {
        printf("anda demam");
    } else {
        printf("suhu tubuh normal");
    }
   return 0;
}