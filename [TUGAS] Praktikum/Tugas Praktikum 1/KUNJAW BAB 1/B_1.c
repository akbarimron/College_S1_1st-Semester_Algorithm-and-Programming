#include <stdio.h>
#include <string.h>

int main(){
    char nama[] = "Clara";
    //char nama = "Clara"; 
    float nilai1, nilai2, avrg;

    printf("Nilai 1 : ");
    scanf("%f", &nilai1);
    printf("Nilai 2 : ");
    scanf("%f", &nilai2);

    avrg = (nilai1 + nilai2)/2;

    printf("nilai %s adalah %.2f", nama, avrg);    

    return 0;
}