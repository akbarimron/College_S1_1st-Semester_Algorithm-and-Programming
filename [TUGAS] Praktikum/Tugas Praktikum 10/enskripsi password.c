#include <stdio.h>
#include <conio.h> // Untuk getch()

void inputSandi(char *sandi, int maxLength) {
    char ch;
    int i = 0;

    printf("Masukkan kata sandi: ");

    while (1) {
        ch = getch(); // Membaca karakter tanpa menampilkan di layar

        // Jika ENTER ditekan, hentikan input
        if (ch == '\r') {
            sandi[i] = '\0'; // Tambahkan null-terminator untuk mengakhiri string
            break;
        }

        // Jika BACKSPACE ditekan
        if (ch == '\b' && i > 0) {
            i--; // Kembali ke indeks sebelumnya
            printf("\b \b"); // Hapus karakter terakhir yang tampil
            continue;
        }

        // Masukkan karakter ke dalam array jika panjangnya belum mencapai batas
        if (i < maxLength - 1) {
            sandi[i++] = ch; // Tambahkan karakter ke string
            printf("*"); // Tampilkan bintang
        }
    }
}

int main() {
    char sandi[20]; // Buffer untuk menyimpan sandi (maksimal 19 karakter)

    inputSandi(sandi, sizeof(sandi));

    printf("\nKata sandi Anda: %s\n", sandi);

    return 0;
}
