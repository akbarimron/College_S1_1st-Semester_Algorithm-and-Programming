/*Studi Kasus 7: Aplikasi Konversi Usia ke Bulan dan Hari
Buat program yang mengkonversi usia seseorang dalam tahun menjadi usia dalam bulan dan hari. Program meminta input berupa usia dalam tahun.

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
12 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int tahun,bulan,hari;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR UMUR DALAM BULAN DAN HARI\n");
printf("Input Umur: ");
//input nilai ke variabel Umur 
scanf("%d",&tahun);
//proses menghitung tahun ke bulan dan hari
bulan=tahun*12;
hari=tahun*365;
//mencetak hasil umur dalam bulan dan hari
printf("umur anda adalah %d tahun, atau %d bulan, atau %d hari", tahun,bulan,hari);
return 0;
}