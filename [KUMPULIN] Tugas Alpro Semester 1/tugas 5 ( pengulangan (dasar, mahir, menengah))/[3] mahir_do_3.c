/*
Menampilkan deret fibonanci

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, lanjut;

    printf("Masukkan jumlah suku deret Fibonacci: ");
    scanf("%d", &n);

    printf("Deret Fibonacci: \n");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        lanjut = t1 + t2;
        t1 = t2;
        t2 = lanjut;
    }

    return 0;
}