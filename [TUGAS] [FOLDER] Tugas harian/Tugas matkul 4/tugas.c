#include <stdlib.h>
#include <stdio.h>

int main(){
    int i,pilih,baso,batagor,jpbaso,jpbatagor,jpbasoTotal,jpbatagorTotal;
    baso=0;batagor=0;jpbasoTotal=0;jpbatagorTotal=0;
    do{
        printf("Menu\n");
        printf("[1] Baso Rp.25.000\n");
        printf("[2] Batagor Rp.20.000\n");
        printf("Masukan Pilihan Anda: ");scanf("%d",&pilih);
        switch(pilih){
            case 1:
                printf("Jumlah Porsi:");scanf("%d",&jpbaso);
                jpbasoTotal=jpbasoTotal+jpbaso;
                baso=jpbasoTotal*25000;
                break;
            case 2:
                printf("Jumlah Porsi:");scanf("%d",&jpbatagor);
                jpbatagorTotal=jpbatagorTotal+jpbatagor;
                batagor=jpbatagorTotal*20000;
                break;
        }
    }while(pilih!=0);
    printf("Rincian Bayar:\n");
    printf("==============\n");
    printf("Baso=%d Porsi:%d\n",jpbasoTotal,baso);
    printf("Batagor=%d Porsi:%d\n",jpbatagorTotal,batagor);
    printf("==============\n");
    printf("Total=%d\n",baso+batagor);
    
    
    return 0;
}