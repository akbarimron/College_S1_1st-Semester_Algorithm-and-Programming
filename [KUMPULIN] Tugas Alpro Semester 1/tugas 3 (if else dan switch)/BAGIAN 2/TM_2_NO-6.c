#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 6: Hasil Ujian SIM
Dalam ujian SIM, peserta lulus jika skor ujian lebih dari atau sama dengan 70. Jika nilainya 70
atau lebih, tampilkan "Lulus ujian SIM." Jika kurang dari itu, tampilkan "Tidak lulus ujian
SIM."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int nilai;
    printf("masukan nilai anda:");scanf("%d",&nilai);
    if (nilai >= 70) {
        printf("Lulus ujian SIM");
    } else {
        printf("Tidak lulus ujian SIM");
    };
   return 0;
}
