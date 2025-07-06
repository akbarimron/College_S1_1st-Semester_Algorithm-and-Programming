#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 4: Penumpang Kereta Api
Kereta api ekonomi hanya boleh membawa maksimal 100 penumpang. Jika jumlah penumpang
melebihi 100, kereta dianggap penuh dan tidak bisa menampung penumpang lagi. Jika kurang
dari 100, tampilkan pesan "Masih ada tempat kosong." Jika tidak, tampilkan pesan "Kereta
penuh."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int Penumpang;
    printf("Jumlah Penumpang:");scanf("%d",&Penumpang);
    if (Penumpang < 100) {
        printf("Masih ada tempat kosong");
    } else {
        printf("Kereta Penuh!");
    };
   return 0;
}