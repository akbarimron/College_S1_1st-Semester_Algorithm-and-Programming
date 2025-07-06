#include <stdio.h>

int main(){
    float massa, v1, v2, F;
    int t;

    printf("massa : ");
    scanf("%f", &massa);
    printf("v1 : ");
    scanf("%f", &v1);
    printf("v2 : ");
    scanf("%f", &v2);
    printf("t : ");
    scanf("%d", &t);

    F = massa * ((v2-v1)/t);

    printf("F = %.2f N", F);

    return 0;
}