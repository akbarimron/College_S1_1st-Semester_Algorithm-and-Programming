#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 9: Kelebihan Muatan Kapal
Sebuah kapal kargo hanya dapat menampung muatan maksimal 10.000 kg. Jika berat barang
yang dimuat lebih dari 10.000 kg, kapal dianggap kelebihan muatan. Buatlah program yang
menampilkan pesan "Kelebihan muatan" jika berat barang lebih dari 10.000 kg, dan "Muatan
normal" jika tidak.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int berat_muatan;
    printf("berapa muatan kapal anda ? :");scanf("%d",&berat_muatan);
    if (berat_muatan > 10000 ) {
        printf("Kelebihan muatan");
    } else {
        printf("Muatan normal");
    };
   return 0;
}