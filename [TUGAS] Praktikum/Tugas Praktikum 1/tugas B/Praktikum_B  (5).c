#include <stdio.h>

int main() {
    // ganti jenis data int menjadi float (karena hasil akan berupa bilangan desimal)
float sisi_alas, tinggi_sisi, luas_alas, luas_sisi, luas_permukaan;

// mengganti %.2f menjadi &f karena tidak boleh
printf("Masukkan panjang sisi alas limas (cm): ");
scanf("%f", &sisi_alas);
printf("Masukkan tinggi sisi segitiga limas (cm): ");
scanf("%f", &tinggi_sisi);

luas_alas = sisi_alas * sisi_alas;
luas_sisi = 4 * (0.5 * sisi_alas * tinggi_sisi);
luas_permukaan = luas_alas + luas_sisi;

printf("Luas permukaan limas segiempat = %.2f cm2\n", luas_permukaan);

return 0;
}