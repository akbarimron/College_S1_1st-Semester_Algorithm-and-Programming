#include <stdio.h>

int main(){
    float hargabaju, hargacelana, hargasepatu, total_harga;

    hargabaju = (100000 - (100000 * 0.10))*2;
    hargacelana = (150000 - (150000 * 0.15))*1;
    hargasepatu = (200000 - (200000 * 0.20))*1;

    total_harga = hargabaju + hargacelana + hargasepatu;

    printf("Total harga setelah diskon: Rp %.2f\n", total_harga);

    return 0;
}