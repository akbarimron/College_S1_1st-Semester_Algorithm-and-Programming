#include <stdio.h>

int main(){
    //int variable nilai diganti menjadi float karena nilai berjenis bilangan desimal
float nilai1, nilai2,nilai3;
char nama[] = "Sean";
float avrg;

nilai1 = 85.7;
nilai2 = 65.9;
nilai3 = 98.2;

avrg = (nilai1 + nilai2 + nilai3)/3;

//mengganti "%d pada avrg menjadi "%f karena data tsb merupakan float"
printf("nilai %c = %f",nama,avrg);

return 0;
}