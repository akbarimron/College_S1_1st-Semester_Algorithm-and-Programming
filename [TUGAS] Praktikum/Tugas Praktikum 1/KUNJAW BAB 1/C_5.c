#include <stdio.h>

int main(){
    int nasgor = 25000, mie = 20000, sate = 30000;
    int jumlah_nasgor, jumlah_mie, jumlah_sate, total;

    printf("Masukkan jumlah pesanan:\n");
    printf("Nasi Goreng (Rp 25.000) = ");
    scanf("%d", &jumlah_nasgor); 
    printf("Mie Goreng (Rp 20.000) = ");
    scanf("%d", &jumlah_mie);  
    printf("Sate Ayam (Rp 30.000) = ");
    scanf("%d", &jumlah_sate); 

    total = (nasgor*jumlah_nasgor) + (mie*jumlah_mie) + (sate*jumlah_sate);

    printf("\nTotal yang harus pelanggan bayar sebesar Rp. %d\n", total);

    return 0;
}