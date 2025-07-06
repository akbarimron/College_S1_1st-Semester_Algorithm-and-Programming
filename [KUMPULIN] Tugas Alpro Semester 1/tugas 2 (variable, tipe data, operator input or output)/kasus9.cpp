/*Studi Kasus 9: Aplikasi Penghitung Waktu Tempuh
Buat program sederhana untuk menghitung waktu tempuh berdasarkan jarak dan
kecepatan. Program menerima input jarak (km) dan kecepatan (km/jam), lalu
menampilkan waktu tempuh dalam jam.

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
12 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int waktu, jarak, kecepatan;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR PENGHITUNG WAKTU TEMPUH\n");
//input nilai ke variabel JARAK DAN WAKTU 
printf("Input jarak (dalam Km): ");
scanf("%d",&jarak);
printf("Input kecepatan (dalam jam): ");
scanf("%d",&kecepatan);
//proses menghitung kecepatan
waktu=jarak/kecepatan;
//mencetak hasil dari perhitungan
printf("jarak = %d km, kecepatan = %d km/jam, maka waktu tempuh = %d jam", jarak, kecepatan, waktu);
return 0;
}