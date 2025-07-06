#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
//deklarasi fungsi
int tambah(int x,int y){//int adalah type keluaran fungsi
       return(x+y);
}
//deklarasi procedure
void kurang (int &p,int &q){
  printf("%d-%d=%d\n",p,q,p-q);
}
int main()
{
      int a,b,pilih,hsl;
      do{
        printf("MENU:\n");
        printf("[1] tambah:\n");
        printf("[2] kurang:\n");
        printf("[3] selesai...:\n");
        printf("Masukan pilihan: ");
        scanf("%d",&pilih);
        switch(pilih){
           case 1:system("CLS");
                  printf("Masukan a : ");scanf("%d",&a);
                  printf("Masukan b : ");scanf("%d",&b);
                  hsl=tambah(a,b);
                  printf("hasil=%d\n",hsl);
                  system("PAUSE");
                  break;
           case 2:system("CLS");
                  printf("Masukan a : ");scanf("%d",&a);
                  printf("Masukan b : ");scanf("%d",&b);
                 // hsl=kurang(a,b);
                  system("PAUSE");
                  break;
        }//end switch()
        system("CLS");
      }while(pilih!=3);
	  system("PAUSE");
      return 0;
}

