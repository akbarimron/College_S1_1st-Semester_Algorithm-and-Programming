/*Tapi Belva pengennya kalkulator yang ada menu untuk memilih operasinya nih. Jadi Buatlah kode program C kalkulator sederhana diaman kalkulator ini menyediakan 5 pilihan menu untuk operasi aritmatika (penambahan, pengurangan, perkalian, pembagian dan modulus (sisa hasil bagi)). Saat program kalkulator dijalankan, user bisa memilih salah satu menu lalu menginput angka pertama dan angka kedua. Setelah itu program akan menampilkan hasil dari operasi yang terjadi. (kalian bisa
pake switch)*/

#include <stdio.h>

int main() {
    int a, b, hasil, operasi;
    printf("Kalkulator Sederhana\n");
    printf("1. penjumlahan\n");
    printf("2. pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. pembagian\n");
    printf("5. modulus (sisa hasil bagi)\n");

    printf("pilih operasi (1 - 5): ");scanf(" %d", &operasi); 
    printf("Masukkan angka 1: ");scanf("%d", &a);
    printf("Masukkan angka 2: ");scanf("%d", &b);

    switch (operasi) {
        case 1:
            hasil = a + b;
            break;
        case 2:
            hasil = a - b;
            break;
        case 3:
            hasil = a * b;
            break;
        case 4:
            if (b == 0) {
                printf("Tidak dapat membagi dengan nol.\n");
                return 1;
            }
            hasil = a / b;
            break;
        case 5:
            hasil = a % b;
            break;
        
        default:
            printf("Operator tidak valid.\n");
            return 1;
    }

    printf("Hasil: %d\n", hasil);

    return 0;
}