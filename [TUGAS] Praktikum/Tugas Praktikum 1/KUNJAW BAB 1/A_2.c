#include <stdio.h>

int main(){
    float volume, tinggi, panjang_alas, lebar_alas;

    printf("panjang alas : ");
    scanf("%f", &panjang_alas);
    printf("lebar alas : ");
    scanf("%f", &lebar_alas);
    printf("tinggi : ");
    scanf("%f", &tinggi);

    volume = (1.0/3.0)*(panjang_alas*lebar_alas)*tinggi;

    printf("Volume = %.2f cm3", volume);

    return 0;
}