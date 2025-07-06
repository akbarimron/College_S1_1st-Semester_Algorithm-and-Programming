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
void tambah(int x,int y){
       printf("hasil procedure tambah adalah %d\n",x+y);
}
int main()
{
      int a,b,z;
      a=7;
      b=5;
      /*memanggil procedure syaratnya nama procedure,jml parameter dan
        type parameter harus sama  dengan yang dideklarasikan
      */
      tambah(a,b);
      return 0;
}

