#include <stdio.h>
int main() {
int i, j, n;
for(i = 1; i <= 4; i++) {
    for(j = 1; j <= 13; j++) {
     if (i == 4 || j == 1 || j == 7 || j == 13 ) {
        printf("* ");
    } else if (i > 1 && i < 4 && j == 2 ) {
        printf("* ");
    } else if (i == 3 && j == 3) {
        printf("* ");

    }else if (i == 3 && j == 5) {
        printf("* ");
    } else if (i > 1 && i < 4 && j == 6) {
        printf("* ");

    }else if (i == 3 && j == 9) {
        printf("* ");
    }else if (i > 1 && i < 4 && j == 8) {
        printf("* ");

    }else if (i == 3 && j == 11) {
        printf("* ");
    }else if (i > 1 && i < 4 && j == 12) {
        printf("* ");
    
    } else {
        printf("  ");
    }
    }
    printf("\n");
    }
    
return 0;
}