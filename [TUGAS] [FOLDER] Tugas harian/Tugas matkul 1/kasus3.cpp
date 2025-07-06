/*Studi Kasus 3: Aplikasi Konversi Berat dari Kilogram ke Gram
Buat program sederhana yang mengkonversi berat dalam kilogram menjadi gram. Program menerima input dalam kilogram dan menampilkan output dalam gram.

Dibuat oleh: Jajang Kusnendar
10 september 2024

Diselesaikan oleh: Muhamad Akbar Imron
11 September 2024
*/
#include <iostream>
int main(){
//deklarasi variabel
int kilogram, gram;
//menulis pesan ke layar
printf("INI ADALAH KALKULATOR KONVERSI KG KE GRAM \n");
printf("Input Berat (dalam Kg): ");
//input nilai ke variabel berat kg
scanf("%d",&kilogram);
//proses menghitung berat 
gram=kilogram * 1000;
//mencetak hasil
printf("%d Kg adalah = %d gram \n", kilogram, gram);
return 0;
}