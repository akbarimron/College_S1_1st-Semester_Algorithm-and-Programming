#include <stdio.h>

int main() {
int angka;
printf("Masukkan angka (masukkan angka negatif untuk berhenti): ");
scanf("%d", &angka);

while (angka >= 0) {
printf("Anda memasukkan: %d\n", angka);
printf("Masukkan angka (masukkan angka negatif untuk berhenti): ");
scanf("%d", &angka);
}
return 0;
}