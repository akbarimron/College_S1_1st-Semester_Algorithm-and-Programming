/*
Menghitung Pembagi Bersama Terbesar dari dua buah bilangan a dan b yang diinput dari
alat masukan

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // Pastikan a lebih besar dari b
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("FPB dari %d dan %d adalah %d\n", a, b, a);

    return 0;
}