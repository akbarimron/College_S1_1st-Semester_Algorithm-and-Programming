#include <stdio.h>

int main(){
float volume, tinggi, panjang_alas, lebar_alas;

/* input nilai variabel untuk mengitung volume limas segiempat
input:
panjang alas = ....
lebar alas = ....
tinggi = ....
*/

printf("input panjang alas: ");
scanf("%f", &panjang_alas);
printf("input lebar_alas: ");
scanf("%f", &lebar_alas);
printf("input tinggi: ");
scanf("%f", &tinggi);

//hitung volume limas segiempat
volume= 1.0/3.0 * (panjang_alas * lebar_alas) * tinggi;
printf("Volume = %.2f cm3", volume);

return 0;
}