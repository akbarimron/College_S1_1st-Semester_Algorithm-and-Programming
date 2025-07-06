#include <stdio.h>
#include <stdlib.h>

void isiKarakter(int n, char kotak[n][n], char karakter) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            kotak[i][j] = karakter;
        }
    }
}

void tampilkanKarakter(int n, char kotak[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c", kotak[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char karakter;
    scanf("%d", &n);
    char kotak[n][n];
    scanf("%c", &karakter);

    isiKarakter(n, kotak, karakter);
    tampilkanKarakter(n, kotak);
}#include <stdio.h>
#include <stdlib.h>

void isiKarakter(int n, char kotak[n][n], char karakter) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            kotak[i][j] = karakter;
        }
    }
}

void tampilkanKarakter(int n, char kotak[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c", kotak[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char karakter;
    printf("Masukkan ukuran kotak: ");
    scanf("%d", &n);
    printf("Masukkan karakter: ");
    scanf(" %c", &karakter); // added space before %c to ignore newline character

    char kotak[n][n];
    isiKarakter(n, kotak, karakter);
    printf("Kotak %dx%d dengan karakter '%c':\n", n, n, karakter);
    tampilkanKarakter(n, kotak);

    return 0;
}