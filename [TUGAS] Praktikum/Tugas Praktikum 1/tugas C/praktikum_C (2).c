
#include <stdio.h>

int main () {
    float massa, v, EK;

printf("masukan Massa : ");
scanf("%f", &massa);
printf("masukan v : ");
scanf("%f", &v);

EK = 1.0/2.0 * massa * pow(v,2);

printf("energi kinetik yang dihasilkan dari massa sejumlah %.2f Kg, dan kecepatan %2.f m/s, adalah EK = %2.f Joule",massa, v, EK );

return 0;
}