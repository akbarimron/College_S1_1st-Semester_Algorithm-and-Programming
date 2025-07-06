#include <stdio.h>

#define MAX_KANDIDAT 2

int main() {
    int suara[MAX_KANDIDAT] = {0}; // Array untuk menyimpan suara masing-masing kandidat
    int pilihan;

    do {
        printf("Kandidat Ketua Kelas:\n");
        printf("[1] Akbar\n");
        printf("[2] Imron\n");
        printf("[3] Cetak Rekap (khusus panitia)\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= MAX_KANDIDAT) {
            suara[pilihan - 1]++;
        } else if (pilihan == MAX_KANDIDAT + 1) {
            int username, password;
            printf("Masukkan username (angka): ");
            scanf("%d", &username);
            printf("Masukkan password (angka): ");
            scanf("%d", &password);

            if (username == 2404565 && password == 0000) { 
                printf("Rekapitulasi Suara:\n");
                for (int i = 0; i < MAX_KANDIDAT; i++) {
                    printf("Kandidat %d: %d suara\n", i + 1, suara[i]);
                }
            } else {
                printf("Username atau password salah!\n");
            }
        } else {
            printf("Pilihan tidak valid!\n");
        }
    } while (1);

    return 0;
}