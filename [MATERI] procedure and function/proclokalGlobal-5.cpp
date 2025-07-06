#include <stdlib.h>
#include <stdio.h>
int hasil;//deklarasi variabel global dengan nama hasil

void kurang(int x,int y){
   //deklarasi variabel lokal hsl,hanya dikenali di procedure ini
   int hsl;
   //variabel lokal dipanggil di lokal procedure
   hsl=x-y;
   printf("hasil eksekusi procedure kurang adalah %d\n",hsl);
}

void tambah(int x,int y){
   //variabel global dipanggil di lokal procedure
   hasil=x+y;
   printf("hasil eksekusi procedure tambah adalah %d\n",hasil);
}

int main()
{
      int a,b;
      a=7;
      b=5;
      /*memanggil procedure syaratnya nama procedure,jml parameter dan
        type parameter harus sama  dengan yang dideklarasikan
      */
      kurang(a,b);
      tambah(a,b);
      printf("%d",hasil);
      system("PAUSE");
      return 0;
}

