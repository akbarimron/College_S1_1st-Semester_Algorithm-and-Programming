#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 5: Status Keanggotaan Gym
Anggota gym mendapatkan status keanggotaan VIP jika mereka membayar lebih dari
Rp1.000.000 per bulan. Jika lebih dari Rp1.000.000, tampilkan pesan "Anda adalah anggota
VIP." Jika tidak, tampilkan pesan "Anda adalah anggota reguler."

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int pembayaran;
    printf("pembayaran anda:");scanf("%d",&pembayaran);
    if (pembayaran > 1000000) {
        printf("Anda adalah anggota VIP!");
    } else {
        printf("Anda adalah anggota reguler");
    };
   return 0;
}