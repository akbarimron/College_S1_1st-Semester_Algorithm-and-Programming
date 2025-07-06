#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
/*
deklarasi procedure dalam 1 file di c harus dibuat sebelum program utama
sebelum int(main) kecuali menggunakan prototype
*/

/*
deklarasi procedure tambah yang berparameter, nama procedure tambah,
jumlah parameter 2 yaitu x dan yang bertype sama yaitu integer
*/
int tambah(int x,int y){
       return(x+y);
}
int main()
{
      int a,b,z;
      a=7;
      b=5;
      z=tambah(a,b);
      printf("hasil=%d\n",z);
      system("PAUSE");
      return 0;
}

