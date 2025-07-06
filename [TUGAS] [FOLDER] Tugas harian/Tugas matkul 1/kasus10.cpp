/*Studi Kasus 10: Aplikasi Penghitung Biaya Listrik
Buat program yang menghitung biaya listrik berdasarkan daya yang digunakan dan
lama penggunaan. Program menerima input daya (watt) dan waktu penggunaan
(jam), serta biaya per kWh.


Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
12 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int Daya, waktu, energi, Tarif_kwh, biaya;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR PENGHITUNG BIAYA LISTRIK\n");
//input nilai ke variabel daya waktu dan tarif
printf("Input Daya: ");
scanf("%d",&Daya);
printf("Input Waktu: ");
scanf("%d",&waktu);
printf("Input Biaya perkwh: ");
scanf("%d",&Tarif_kwh);
//proses menghitung tarif
energi=Daya * waktu;
biaya= energi * Tarif_kwh;
//mencetak hasil dari perhitungan
printf("maka biaya anda saat ini adalah Rp.%d", biaya);
return 0;
}