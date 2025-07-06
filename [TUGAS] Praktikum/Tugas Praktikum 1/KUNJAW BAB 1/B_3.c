#include <stdio.h>

int main() {
    float sisi_alas, tinggi_sisi, luas_alas, luas_sisi, luas_permukaan;
    //int sisi_alas, tinggi_sisi, luas_alas, luas_sisi, luas_permukaan;

    // Input panjang sisi alas dan tinggi sisi segitiga
    printf("Masukkan panjang sisi alas limas (cm): ");
    scanf("%f", &sisi_alas);
    //scanf("%.2f", &sisi_alas);
    printf("Masukkan tinggi sisi segitiga limas (cm): ");
    scanf("%.2f", &sisi_alas);
    //scanf("%.2f", &tinggi_sisi);

    // Hitung luas alas
    luas_alas = sisi_alas * sisi_alas;

    // Hitung luas 4 sisi segitiga
    luas_sisi = 4 * (0.5 * sisi_alas * tinggi_sisi);

    // Hitung luas permukaan limas
    luas_permukaan = luas_alas + luas_sisi;

    // Tampilkan hasil perhitungan
    printf("Luas permukaan limas segiempat = %.2f cm2\n", luas_permukaan);

    return 0;
}
