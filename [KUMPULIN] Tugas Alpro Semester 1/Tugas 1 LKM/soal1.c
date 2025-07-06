/*
Dibuat oleh: Jajang Kusnendar
tanggal: 01 September 2024
nama file: dasar1.cpp

Program dasar-1
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
    printf("angka tersebut jika dikalikan dengan 5 hasilnya adalah %d\n",angka*5);
    return 0;
}

