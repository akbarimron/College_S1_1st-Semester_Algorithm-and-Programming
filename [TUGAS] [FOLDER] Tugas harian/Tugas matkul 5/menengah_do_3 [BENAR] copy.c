/*
Menghitung rata-rata dari bilangan yang diinput dari alat masukan sebanyak n buah

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>


int main() {
    float batasAwal, batasAkhir, jumlah = 0,ratarata, jumlah1 = 0, i, jumlahbaris, bilangan;

    printf("Masukkan jumlah nilai: ");scanf("%f", &jumlahbaris);
 
    for(i = 1; i <= jumlahbaris; i++ ) {
        printf("Masukkan bilangan ke-%.0f: ", i); scanf("%f", &bilangan);
         jumlah += bilangan;
       
    }
     ratarata = jumlah / jumlahbaris;
     printf("rata rata nya adalah %.2f\n", ratarata);
     printf("jumlah = %.0f", jumlah);

    return 0;
}