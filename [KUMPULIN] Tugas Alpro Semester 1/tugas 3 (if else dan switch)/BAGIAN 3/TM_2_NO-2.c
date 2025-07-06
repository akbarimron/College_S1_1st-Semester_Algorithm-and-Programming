#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 2: Kelayakan Menonton Film
Di bioskop, seorang penonton hanya diperbolehkan menonton film kategori 17+ jika usianya
di atas 17 tahun. Jika usianya di atas 17 tahun, pengecekan berikutnya adalah apakah dia
membawa kartu identitas. Jika membawa kartu identitas, maka dia diperbolehkan masuk. Jika
tidak, dia tidak diperbolehkan.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024


*/
int main() {
    float umur, kartu_identitas;

    printf("masukan umur anda:");scanf("%f",&umur);
    if (umur > 17) {
        printf("apakah anda membawa kartu identitas? (1 = iya) & (0 = tidak) : "); scanf("%f",&kartu_identitas);
        if (kartu_identitas == 1) {
            printf("anda diperbolehkan masuk");
        } else {
            printf("anda tidak diperbolehkan masuk");
        } 
    } else {
        printf("anda belum cukup umur");
    }; 
   return 0;
}