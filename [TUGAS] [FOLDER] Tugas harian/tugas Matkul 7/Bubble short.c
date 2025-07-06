/*
Program Pengurutan menggunakan Bubble Sort ascending
Dibuat oleh: Jajang Kusnendar
Tanggal: 20 November 2024
*/

#include <stdio.h>

#define n 10 // Ukuran array
int A[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // Array

// Fungsi untuk menukar dua elemen
void tukar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i, j, k, jmlTukar = 0;

    // Menampilkan array sebelum diurutkan
    printf("Sebelum diurutkan: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Proses Bubble Sort
    for (i = 0; i < n - 1; i++) {
        printf("\nIterasi ke-%d\n", i + 1);

        for (j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                tukar(&A[j], &A[j + 1]);
                jmlTukar++;
            }
        }

        // Menampilkan array setelah setiap iterasi
        for (k = 0; k < n; k++) {
            printf("%d ", A[k]);
        }
        printf("\n");
    }

    // Menampilkan array setelah diurutkan
    printf("\nSetelah diurutkan: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan jumlah penukaran
    printf("Jumlah Penukaran: %d\n", jmlTukar);

    return 0;
}
