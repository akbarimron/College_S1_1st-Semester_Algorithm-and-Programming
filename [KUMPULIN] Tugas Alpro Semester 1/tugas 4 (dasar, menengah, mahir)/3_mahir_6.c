#include <stdio.h>
/*
menentukan lama waktu menit"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
#include <stdio.h>
#include <string.h>

int main() {
    int N, hari;
    char *hari_dalam_minggu[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

    printf("Masukkan nilai N (jumlah hari ke depan): ");
    scanf("%d", &N);

    // Hari dimulai dari 0 (Senin), jadi kita kurangi 1 dari N untuk mendapatkan indeks yang tepat
    hari = (N + 0) % 7;

    printf("N hari ke depan adalah hari: %s\n", hari_dalam_minggu[hari]);

    return 0;
}