
#include <stdio.h>

int main () {
    float massa, v1, v2, t, F, a;

printf("masukan Massa : ");
scanf("%f", &massa);
printf("masukan waktu : ");
scanf("%f", &t);
printf("masukan v1 : ");
scanf("%f", &v1);
printf("masukan v2 : ");
scanf("%f", &v2);


a = (v1 - v2) / t ;
F = massa * a;


printf("Diketahui v1 adalah %.2f, v2 adalah %.2f, da waktu adalah %.2f Detik. maka percepatan (a) yang dihasilkan adalah %.2f. maka dari itu Gaya yang dihasilkan adalah %.2f Newton ", v1, v2, t, a, F);

return 0;
}