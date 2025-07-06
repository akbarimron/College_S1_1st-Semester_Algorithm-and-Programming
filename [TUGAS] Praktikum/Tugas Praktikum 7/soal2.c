#include <stdio.h>

int main() {
    int i,j;
    int angka[2][3];

  printf("masukan nilai matriks \n");
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf ("%d",&angka[i][j]);
        }
    }

printf("\njadi nilai matrix adalah: \n");
    for (i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            printf("%d ", angka[i][j]);
        }
        printf("\n");
    }
}