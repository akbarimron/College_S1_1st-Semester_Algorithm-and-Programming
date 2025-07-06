
#include <stdio.h>

int main () {
  float diameter, tinggi, luas_permukaan, jari2, volume, phi, pelukis;
    phi=3.14159;
    tinggi = 75;
    diameter = 35;

  jari2 = diameter/2;
  pelukis = sqrt(pow(jari2,2) + pow(tinggi,2));
   luas_permukaan= (phi * pow(jari2,2)) + (phi * jari2 * pelukis);
    
    volume= (1.0/3.0 * phi * pow(jari2,2) * tinggi);

    printf("Luas Permukaan: %.2f\n", luas_permukaan);
        printf("Volume: %.2f\n", volume);

return 0;
}