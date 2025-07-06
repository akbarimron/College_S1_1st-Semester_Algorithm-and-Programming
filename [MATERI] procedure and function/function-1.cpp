#include <stdlib.h>
#include <stdio.h>
//deklarasi fungsi
//int adalah type keluaran fungsi
int tambah(int x,int y){
	return(x+y);
}
//deklarasi procedure
void kurang (int p,int q){
  printf("%d-%d=%d\n",p,q,p-q);
}
int main()
{
      int a,b,hsl;
      a=7;b=5;
	  //pemanggilan fungsi
	  hsl=tambah(a,b);//hasil dari fungsi ditampung di hsl
      printf("%d+%d=%d\n",a,b,hsl);
      //pemanggilan procedure
      kurang(b,a);
	  system("PAUSE");
      return 0;
}

