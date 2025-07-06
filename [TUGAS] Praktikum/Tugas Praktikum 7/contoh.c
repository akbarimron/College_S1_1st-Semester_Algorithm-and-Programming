#include <stdio.h>
int main (){
    int i,j,n,m;
    printf ("masukan nilai n dan m : ");
    scanf ("%d%d",&n,&m);
    int angka [n][m];
    
    printf("masukan nilai matriks \n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf ("%d",&angka[i][j]);
        }
    }
    printf("\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Nilai pada indeks (%d,%d) adalah ; %d\n",i,j,angka[i][j]);
        }
    }
    printf("\nnilai Array angka matriks : \n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",angka[i][j]);
        }
    printf("\n");}
}