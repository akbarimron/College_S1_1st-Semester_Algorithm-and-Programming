
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
int jam, menit, detik;
printf("masukkan jam: ");
scanf("%d", &jam);

menit = jam * 60;
detik = jam * 3600;

printf("%d Jam  adalah: %d\n menit",jam, menit);
printf("%d jam adalah: %d\n detik",jam, detik);


 }