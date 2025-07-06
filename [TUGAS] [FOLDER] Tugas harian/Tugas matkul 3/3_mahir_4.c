#include <stdio.h>
/*
menentukan lama waktu menit"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int jam, menit;

    printf("Masukkan jam (0-23): "); scanf("%d", &jam);

    printf("Masukkan menit (0-59): "); scanf("%d", &menit);

    menit++;

    if (menit >= 60) {
        menit = 0;
        jam++;

     
        if (jam >= 24) {
            jam = 0;
        }
    }

    printf("Waktu setelah ditambah 1 menit: %d:%02d\n", jam, menit);

    return 0;
}