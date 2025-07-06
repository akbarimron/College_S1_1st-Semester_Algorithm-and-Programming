#include <stdio.h>

int main() {
    int n, i, j;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    // Periksa apakah n ganjil untuk pola c
    if (n == 5) {
    printf("Pola a:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i == n - j - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    } else if (n == 4) {
    printf("\nPola b:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" "); 
        }
        printf("*\n"); 
    }

    } else if (n >= 5) {
    for(i = 1; i <= 5; i++) {
    for(j = 1; j <= 5; j++) {
     if (i == 3 || j == 3 ) {
        printf("* ");
    } else if (i < 3 && j == 1) {
        printf("* ");
    } else if (i == 1 && j > 3) {
        printf("* ");
    } else if (i > 3 && j == 5) {
        printf("* ");
    } else if (i == 5 && j < 3) {
        printf("* ");
    } else {
        printf("  ");
    }
    }
    printf("\n");
    }

    }


    printf("\nPola nazi:\n");

    return 0;
}