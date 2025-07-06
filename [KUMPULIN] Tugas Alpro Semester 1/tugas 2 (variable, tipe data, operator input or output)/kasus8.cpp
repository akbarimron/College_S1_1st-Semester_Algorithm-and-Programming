/*Studi Kasus 8: Aplikasi Penghitung Gaji Bersih
Buatlah program yang menghitung gaji bersih karyawan setelah dipotong pajak. Program menerima input gaji pokok dan persentase pajak, kemudian menghitung dan menampilkan gaji bersih.

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
12 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int gaji_pokok, persentase_pajak, gaji_bersih;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR GAJI BERSIH\n");
printf("Input gaji pokok: ");
//input nilai ke variabel gaji pokok dan persentase pajak
scanf("%d",&gaji_pokok);
printf("persentase pajak : "); scanf("%d",&persentase_pajak);
//proses menghitung tahun ke bulan dan hari
gaji_bersih = gaji_pokok - (gaji_pokok * persentase_pajak / 100);
//mencetak hasil umur dalam bulan dan hari
printf("gaji anda adalah %d", gaji_bersih);
return 0;
}