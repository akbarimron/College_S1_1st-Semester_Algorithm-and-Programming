#include <stdio.h>
int main() {
int angka;
do {
printf("Masukkan angka (harus lebih besar dari 100 untuk berhenti): ");
scanf("%d", &angka);
} while (angka <= 100);
return 0;
}