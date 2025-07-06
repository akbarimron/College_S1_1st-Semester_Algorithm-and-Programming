#include <stdio.h>

int main() {
    int mobil = 0, penumpang;

    printf("Berapa penumpang: ");
    scanf("%d", &penumpang);

    // Hitung jumlah mobil yang dibutuhkan
    mobil = (penumpang + 6) / 7;  // Menambah 6 agar pembagian selalu membulat ke atas

    printf("Jumlah mobil = %d\n", mobil);

    return 0;
}
