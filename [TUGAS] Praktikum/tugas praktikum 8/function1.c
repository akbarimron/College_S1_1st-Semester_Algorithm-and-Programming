#include <stdio.h>

int hasilPangkatDua(int num) {
    return  num * num;
}

void jenisBilangan(int num) {
    printf("jenis bilangan: ");
    if (num % 2 == 0) {
        printf("Jenis Bilangan: Bilangan genap\n");
    } else {
        printf("Jenis Bilangan: Bilangan ganjil\n");
    }
}

int main() {

    int num = 2, pangkat;
    scanf("%d", &num);

    pangkat = hasilPangkatDua(num); 
    printf("hasil pangkat: %d\n", pangkat);
    jenisBilangan(pangkat);

    return 0;
}
