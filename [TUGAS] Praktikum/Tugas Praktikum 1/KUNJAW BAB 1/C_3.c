#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float diameter=35;
    float phi=3.1415926;
    int tinggi=75;
    float luaspermukaan,garispelukis,volume,r;

    r=diameter/2;
    garispelukis=sqrt(pow(r,2)+pow(tinggi,2));
    luaspermukaan=(phi*r*garispelukis)+(phi*pow(r,2));
    volume=(phi*pow(r,2)*tinggi)/3;

    printf("\nLuas permukaan kerucut: %.2f", luaspermukaan);
    printf("\nVolume kerucut: %.2f\n", volume);

    return 0;
}
