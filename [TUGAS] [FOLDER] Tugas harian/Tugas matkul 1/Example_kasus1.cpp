/*
Buatlah program sederhana untuk menghitung luas persegi panjang. Program harus
menerima input panjang dan lebar persegi panjang dari pengguna, lalu menghitung
dan menampilkan hasil luasnya.

Program SolusiPersegiPanjang
Dibuat oleh: Jajang Kusnendar
10 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int panjang,lebar,luas;
//menulis pesan ke layar
printf("masukan panjang persegi panjang: ");
//input nilai ke variabel panjang
scanf("%d",&panjang);
//menulis pesan ke layar
printf("masukan lebar persegi panjang: ");
//input nilai ke variabel lebar
scanf("%d",&lebar);
//proses menghitung luas persegi panjang
luas=panjang*lebar;
//mencetak hasil
printf("luas persegi panjang=%d",luas);
return 0;