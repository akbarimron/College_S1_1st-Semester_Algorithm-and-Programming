#include <stdio.h>

void isikarakter(int n, char kotak[n][n], char karakter) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            kotak[i][j] = karakter;
        }
    }
}

void tampilankarakter(int n, char kotak[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", kotak[i][j]);
        }
        printf("\n"); // Tambahkan baris baru setelah mencetak satu baris array
    }
}

int main() {
    int n;
    char karakter;

    // Input ukuran kotak
    printf("Masukkan ukuran kotak: ");
    scanf("%d", &n);

    // Input karakter untuk mengisi kotak
    printf("Masukkan karakter: ");
    scanf(" %c", &karakter);

    char kotak[n][n]; // Deklarasi array 2D

    // Isi kotak dengan karakter
    isikarakter(n, kotak, karakter);

    // Tampilkan kotak
    printf("Kotak yang dihasilkan:\n");
    tampilankarakter(n, kotak);

    return 0;
}
