/*Buatlah program untuk menghitung diskon pembelian sepatu dengan harga Rp.98.000,00,
dengan rumus sebagai berikut:
Harga akhir = Total Harga sepatu − (Total harga sepatu × diskon)
Dengan ketentuan:
1. Total diskon sesuai dengan banyak sepatu yang dibeli oleh pembeli, jika pembeli membeli 1
pasang sepatu maka diskon sebesar 10%, jika pembeli membeli 2 pasang sepatu maka diskon
sebesar 20%, dst.
2. Jumlah sepatu yang dibeli, diinput oleh user*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float harga_sepatu = 98000, diskon, unit_penjualan, hasil_akhir, diskon_akhir, potongan_diskon;
printf("Anda mau beli berapa sepatu pak : "); scanf("%f", &unit_penjualan);
harga_sepatu = unit_penjualan * harga_sepatu;
diskon =( unit_penjualan * 10);
diskon_akhir = diskon / 100;
potongan_diskon = (harga_sepatu * diskon_akhir);
hasil_akhir = harga_sepatu - potongan_diskon;
printf("anda ingin membeli %.0f sepatu. anda mendapat diskon %.0f Persen, sebanyak %.0f. biaya yang perlu anda bayar adalah %.0f", unit_penjualan, diskon, potongan_diskon , hasil_akhir);



return 0;
}

//2025 + 625