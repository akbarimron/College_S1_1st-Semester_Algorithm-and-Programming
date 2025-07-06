#include <stdio.h>

int main() {
    int angka, puluhan, satuan;
    char *satuan_kata[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    char *belasan_kata[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    char *puluhan_kata[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    printf("Masukkan angka (1-99): ");
    scanf("%d", &angka);

    if (angka < 1 || angka > 99) {
        printf("Angka di luar rentang 1-99.\n");
    } else {
        puluhan = angka / 10;
        satuan = angka % 10;

        if (angka < 10) {
            printf("%s\n", satuan_kata[satuan]);
        } else if (angka < 20) {
            printf("%s\n", belasan_kata[satuan]);
        } else {
            printf("%s %s\n", puluhan_kata[puluhan], satuan_kata[satuan]);
        }
    }

    return 0;
}