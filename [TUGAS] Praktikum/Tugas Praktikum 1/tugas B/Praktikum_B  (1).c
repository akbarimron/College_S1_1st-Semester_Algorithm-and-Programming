#include <stdio.h>
#include <string.h>
int main(){
    //mengganti nilai dalam kurung [x], yang dimana x adalah panjang karakter dari input
char nama[100], alamat[100];
int usia, nim;

printf("Masukkan nama : "); //nama : Clarissa
scanf("%30[^\n]", &nama);
printf("Masukkan nim : "); //nim : 245790

//nim berupa angka maka "%s" diganti menjadi "%d" 
scanf("%d", &nim);
printf("Masukkan usia : "); //usia : 18
scanf("%d", &usia);
printf("Masukkan alamat : "); //alamat : Jln. Kenanga Raya No.23
// %s pada alamat diganti menjadi %[^/n]s agar space juga terinput
scanf(" %30[^\n]", &alamat);
printf("\n%s memiliki nim %d dengan usia %d dan tinggal di %s", nama, nim, usia, alamat);
return 0;
}