/*
Buatlah sebuah program dalam bahasa C untuk menghitung biaya pengiriman barang berdasarkan berat barang yang dimasukkan oleh pengguna. Jika berat barang kurang dari atau sama dengan 1 kg, biaya pengiriman adalah 3000 rupiah. Jika berat barang lebih dari 1 kg tetapi kurang dari atau sama dengan 10 kg, biaya pengiriman adalah 8000 rupiah. Jika berat barang lebih dari 5 kg, biaya pengiriman adalah 15000 rupiah.
*/

#include <stdio.h>

int main() {
    float BeratBarang;
    
    printf("masukan berat barang (dalam KG) : "); scanf("%f", &BeratBarang);

    if (BeratBarang <= 1) {
        printf("Berat barang = %.0f Kg, biaya pengiriman adalah Rp.3000\n", BeratBarang);
    } else if (BeratBarang > 1 && BeratBarang <= 10) {
        printf("Berat barang = %.0f Kg, biaya pengiriman adalah Rp.8000\n", BeratBarang);
    }  else if (BeratBarang > 10)
        printf("Berat barang = %.0f Kg, biaya pengiriman adalah Rp.15000\n", BeratBarang);
}
