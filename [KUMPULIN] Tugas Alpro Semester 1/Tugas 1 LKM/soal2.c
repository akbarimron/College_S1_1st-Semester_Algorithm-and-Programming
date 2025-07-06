/*
Dibuat oleh: Jajang Kusnendar
tanggal: 01 September 2024
nama file: dasar2.cpp

Program dasar-2
Kamus
  angka:integer
Algoritma
output("input sebuah angka: ")
input(angka)
output("angka jika dikalikan dengan 5 hasilnya=",angka*5);

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int angka;
    printf("input sebuah angka:");
    scanf("%d",&angka);
    //angka = 20 kali dari bilangan yang diinput
    angka *= 20;
    printf(" 20 kali lipat =  %d\n",angka);
    printf("angka tersebut jika dikalikan dengan 5 hasilnya adalah %d\n",angka*5);
    return 0;
}

