#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int r=9;
float phi=3.14159;
float luas_p,volume;



//hitung luas permukaan bola dan volume bola (menggunakan pow())

luas_p = 4 * phi * pow(r, 2);
volume = (4/3) * phi * pow(r, 3);

printf("Luas permukaan bola: %.2f", luas_p);
printf("\nVolume bola: %.2f", volume);

return 0;
}