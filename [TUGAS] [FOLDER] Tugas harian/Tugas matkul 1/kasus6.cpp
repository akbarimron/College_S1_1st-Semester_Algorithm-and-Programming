/*Studi Kasus 6: Aplikasi Penghitung Jarak Tempuh
Buatlah program yang menghitung jarak tempuh berdasarkan kecepatan dan waktu tempuh. Program menerima kecepatan (km/jam) dan waktu (jam), kemudian menampilkan jarak yang ditempuh..

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
12 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int kecepatan, jarak, waktu;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR PENGHITUNG JARAK\n");
printf("Input Kecepatan (Dalam Km/jam): ");
//input nilai ke variabel Kecepatan 
scanf("%d",&kecepatan);
printf("input waktu (dalam jam):");
//input nilai ke variabel waktu
scanf("%d",&waktu);
//proses menghitung jarak
jarak=waktu*kecepatan;
//mencetak hasil
printf("apabila Akbar berlari dengan kecepatan %d km/jam, dalam %d jam, maka ia sudah berlari sepanjang %d Km", kecepatan,waktu, jarak);
return 0;
}