/*Studi Kasus 5: Aplikasi Penghitung Harga Setelah Diskon
Buat program yang menerima harga awal suatu barang dan persentase diskon, lalu menghitung harga akhir setelah diskon.

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
11 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int hargaawal,diskon, hargaakhir;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR PENGHITUNG DISKON\n");
printf("Input harga awal: ");
//input nilai ke variabel harga 
scanf("%d",&hargaawal);
printf("input diskon (dalam persentase):");
//input nilai ke variabel diskon
scanf("%d",&diskon);
//proses menghitung harga setelah
hargaakhir=hargaawal - (hargaawal * diskon / 100);
//mencetak hasil
printf("Harga barang %d, dengan Diskon = %d persen, harga saat ini adalah Rp.%d  \n", hargaawal, diskon, hargaakhir);
return 0;
}