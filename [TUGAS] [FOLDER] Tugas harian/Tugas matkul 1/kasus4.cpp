/*Studi Kasus 4: Aplikasi Penghitung Volume Kubus
Buatlah program yang menerima input sisi kubus dari pengguna dan menghitung volume kubus tersebut.

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
11 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int panjangsisi, volume;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR PENGHITUNG VOLUME KUBUS\n");
printf("Input panjang sisi kubus: ");
//input nilai ke variabel panjang sisi
scanf("%d",&panjangsisi);
//proses menghitung volume
volume=panjangsisi*panjangsisi*panjangsisi;
//mencetak hasil
printf("apabila luas sisi kubus adalah %d, maka volumenya adalah %d Cm^3 \n", panjangsisi, volume);
return 0;
}