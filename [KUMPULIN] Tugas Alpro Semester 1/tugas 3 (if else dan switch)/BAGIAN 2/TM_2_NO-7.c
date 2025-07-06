#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 7: Kecepatan Internet
Jika kecepatan internet lebih dari 10 Mbps, dianggap cukup cepat. Jika kecepatan lebih dari 10
Mbps, tampilkan pesan "Kecepatan internet cukup cepat." Jika tidak, tampilkan pesan
"Kecepatan internet lambat."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kecepatan_internet;
    printf("kecepatan internet anda:");scanf("%d",&kecepatan_internet);
    if (kecepatan_internet > 10) {
        printf("kecepatan internet cukup cepat");
    } else {
        printf("kecepatan internet lambat");
    };
   return 0;
}