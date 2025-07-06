#include <stdio.h>

int main(){
    int panjang, lebar, tinggi, luas;

    printf("input panjang, lebar, tinggi balok : ");
    scanf("%d %d %d", &panjang, &lebar, &tinggi);

    luas = 2*((panjang*lebar)+(panjang*tinggi)+(lebar*tinggi));

    printf("luas = %d cm2", luas);

    return 0;
}