#include <stdlib.h>
#include <stdio.h>
/*
deklarasi menggunakan prototype
*/
void Selesai();
void tambah(int x,int y);

int main()
{
      int a,b;
      a=7;b=5;
      tambah(a,b);
      return 0;
}
void tambah(int x,int y){
        printf("hasil eksekusi procedure tambah adalah %d\n",x+y);
        Selesai();
        /*Procedure Selesai() dipanggil sebelum procedure Selesai dibuat (sah)
        krn sudah dideklarasikan lewat prototype
        */
}
void Selesai(){
        printf("Finish\n");
}
