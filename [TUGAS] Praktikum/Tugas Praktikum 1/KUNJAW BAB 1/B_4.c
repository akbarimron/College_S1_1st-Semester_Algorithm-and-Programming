#include <stdio.h>

int main(){
    int jumlah_apel, jumlah_orang,sisa_apel;

    printf("Jumlah apel yang dimiliki : ");
    scanf("%d", &jumlah_apel);
    printf("Jumlah orang yang akan diberi apel : ");
    scanf("%d", &jumlah_orang);

    sisa_apel = jumlah_apel%jumlah_orang;
    //sisa_apel = jumlah_apel/jumlah_orang;

    printf("Sisa apel yang dimiliki sebanyak %d apel", sisa_apel);
    //printf("Sisa apel yang dimiliki sebanyak %f apel", sisa_apel);

    return 0;
}