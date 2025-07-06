#include <stdio.h>

int main() {
    float a, b, hasil;
    char operasi;

    printf("Masukkan angka 1: ");
    scanf("%f", &a);

    printf("(+, -, *, /): ");
    scanf(" %c", &operasi); // Tambahkan spasi sebelum %c untuk mengatasi masalah newline

    printf("Masukkan angka 2: ");
    scanf("%f", &b);

    switch (operasi) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Tidak dapat membagi dengan nol.\n");
                return 1;
            }
            hasil = a / b;
            break;
        default:
            printf("Operator tidak valid.\n");
            return 1;
    }

    printf("Hasil: %.2f\n", hasil);

    return 0;
}