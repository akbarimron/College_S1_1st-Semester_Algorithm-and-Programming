
#include <stdio.h>

int main () {
  float celana, sepatu, baju, diskon_celana, diskon_sepatu, diskon_baju,harga_total, sepatu_diskon, celana_diskon, baju_diskon;
  celana=150000;
  sepatu=200000;
  baju= 100000;
  diskon_celana=15.0/100.0;
  diskon_sepatu=20.0/100.0;
  diskon_baju=10.0/100.0;

// setelah diskon

celana_diskon = celana - (diskon_celana * 150000);
sepatu_diskon = sepatu - (diskon_sepatu * 200000);
baju_diskon = baju - (diskon_baju * 100000);

    harga_total =( 2 * baju_diskon) + celana_diskon + sepatu_diskon;
    printf("Harga total setelah diskon: Rp %.2f", harga_total);

return 0;
}