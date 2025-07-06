#include <stdio.h>
#include <math.h>

int main() {
    float jari_jari, tinggi, luas_alas, luas_permukaan;

    // Input jari-jari dan tinggi tabung
    printf("Masukkan jari-jari tabung: ");
    scanf("%f", &jari_jari);
    printf("Masukkan tinggi tabung: ");
    scanf("%f", &tinggi);

    // Hitung luas alas tabung
    luas_alas = 3.14159 * pow(jari_jari,2); 
    //pow digunakan untuk menghitung pangkat suatu angka, pow(nilai dasar,nilai pangkat)

    // Hitung luas permukaan tabung
    luas_permukaan = 2 * 3.14159 * jari_jari * (jari_jari + tinggi);

    // Tampilkan hasil perhitungan
    printf("Luas alas tabung = %.2f cm2\n", luas_alas);
    printf("Luas permukaan tabung = %.2f cm2\n", luas_permukaan);

    return 0;
}