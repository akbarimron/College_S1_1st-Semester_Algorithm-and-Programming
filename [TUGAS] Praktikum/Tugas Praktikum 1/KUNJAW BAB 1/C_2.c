#include <stdio.h>
#include <math.h>

int main(){
    float massa, v, Ek;

    printf("massa : ");
    scanf("%f", &massa);
    printf("v : ");
    scanf("%f", &v);

    Ek = 1.0/2.0 * massa * pow(v,2);

    printf("\nEk = %.2f J", Ek);

    return 0;
}