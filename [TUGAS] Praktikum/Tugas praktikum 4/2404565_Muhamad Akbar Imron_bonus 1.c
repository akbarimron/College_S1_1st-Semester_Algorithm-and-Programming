/*Buatlah sebuah program dalam bahasa C yang meminta input dari pengguna berupa tahun. Programnya bisa menggunakan nested if untuk menentukan apakah tahun tersebut merupakan tahun kabisat atau bukan.
Syarat tahun kabisat:
Tahun yang habis dibagi 4 adalah tahun kabisat, kecuali jika habis dibagi 100 tetapi tidak habis dibagi 400.
Outputnya: apakah tahun tersebut merupakan tahun kabisat atau bukan*/
#include <stdio.h>
int main() {
    int tahun, hasil,hasil100, hasil400, hasil4;
    
    printf("masukan tahun : ");scanf("%d", &tahun);

    hasil400 = tahun % 400;
    hasil100 = tahun % 100;
    hasil4 = tahun % 4;

    if (hasil400 != 0 && hasil100 == 0) {
        printf("bukan tahun kabisat");
    } else if (hasil400 != 0 && hasil100 != 0 && hasil4 == 0 ) {
        printf("adalah tahun kabisat");
    }  else if (hasil400 == 0)
         printf("adalah tahun kabisat");
}
