
/*Studi kasus 2: aplikasi konvesi jam ke menit dan detik
Buatlah program yang menerima input dalam bentuk jam, kemudian menghitung program solusi konversi jam ke menit dan detik


dibuat oleh:jajang kusnendar
10 september 2024

diselesaikan oleh: muhamad akbar imron
11 september 2024
*/


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 int main() {


int jam, menit, detik, milidetik;
printf("masukkan jam: ");
scanf("%d", &jam);

menit = jam * 60;
detik = jam * 3600;
milidetik = jam *3600000;

printf("%d Jam  adalah: %d menit\n",jam, menit);
printf("%d jam adalah: %d detik\n",jam, detik);
printf("jam adalah %d\n milidetik, jam, milidetik");


 }




 
