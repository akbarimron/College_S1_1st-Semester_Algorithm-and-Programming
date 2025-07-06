#include <stdlib.h>
#include <stdio.h>

/*
Studi Kasus 1: Suhu Udara
Di sebuah kota, cuaca sering berubah-ubah. Buatlah program yang memeriksa suhu udara. Jika
suhu udara melebihi 30°C, program akan menampilkan pesan "Suhu terlalu panas." Jika tidak,
tidak ada pesan yang ditampilkan.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    float suhu;
    printf("masukan suhu:");scanf("%f",&suhu);
    if (suhu > 30 && suhu < 100) {
        printf("suhu %.0f terlalu panas!", suhu);
    } 
   return 0;
}