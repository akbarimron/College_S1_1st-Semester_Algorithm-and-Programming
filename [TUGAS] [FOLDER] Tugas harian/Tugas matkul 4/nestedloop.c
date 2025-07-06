#include <stdlib.h>
#include <stdio.h>

/*
contoh materi for"
2. cari berapa banyak bilangan ganjil

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
/* baris ganjil genap
int main() {
    int i, j, awal, akhir, ganjil;
   
    for (i=1;i <= 10; i++) {
        for(j=1;j <= 10; j++) {
            ganjil = i % 2;
        if (ganjil != 0) {
            if (i >= j) {
               printf("* ");
            } else {
                printf(" ");
            }
        } 
        }
        printf("\n");
    }
     
     return 0;
    }
*/

/* SPACE BARIS

int main() {
    int i, j, awal, akhir, ganjil;
   
    for (i=1;i <= 10; i++) {
        for(j=1;j <= 10; j++) {
            ganjil = i % 2;
        if (ganjil != 0) {
               printf("* ");
        } 
        }
        printf("\n");
    }
     
     return 0;
    }
*/

// jam tsb + 12 


int main() {
    int n = 5;  
    int i,j;
    
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");  
        }

        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}