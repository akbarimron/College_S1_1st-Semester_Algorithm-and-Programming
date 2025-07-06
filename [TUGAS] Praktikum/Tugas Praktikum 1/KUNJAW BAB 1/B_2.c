#include <stdio.h>

int main(){
    float nilai1, nilai2,nilai3;
    //int nilai1, nilai2,nilai3;
    char nama[] = "Sean";
    float avrg;

    nilai1 = 85.7;
    nilai2 = 65.9;
    nilai3 = 98.2;

    avrg = (nilai1 + nilai2 + nilai3)/3;

    printf("nilai %s = %.2f",nama,avrg);
    //printf("nilai %c = %d",nama,avrg);

    return 0;
}