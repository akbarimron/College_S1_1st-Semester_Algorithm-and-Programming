#include <stdlib.h>
#include <stdio.h>

//deklarasi procedure
void Selesai(){
        printf("Finish...\n");
}

void tambah(int x,int y){
        printf("hasil eksekusi procedure tambah adalah %d\n",x+y);
        /*
        memanggil procedure lain syaratnya procedure yang dipanggil harus sudah
        dideklarasikan sebelumnya, kecuali menggunakan "prototype"
        */
        Selesai();

}

int main()
{
      int a,b;
      a=7;b=5;
      tambah(a,b);
      return 0;
}

