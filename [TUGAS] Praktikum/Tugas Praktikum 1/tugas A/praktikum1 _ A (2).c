#include <stdio.h>

int main(){
int panjang, lebar, tinggi, luas;

//input nilai variabel dan hitung luas balok
printf("input panjang :");
scanf("%d", &panjang);
printf("input lebar :");
scanf("%d", &lebar);
printf("input tinggi:");
scanf("%d", &tinggi);

luas= 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
printf("luas = %d cm2", luas);

return 0;
};