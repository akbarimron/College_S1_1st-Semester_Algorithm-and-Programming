#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 5: Penentuan Menu Makanan
Di kantin sekolah, setiap hari menyediakan menu yang berbeda. Senin: Nasi goreng, Selasa:
Mie ayam, Rabu: Soto ayam, Kamis: Nasi padang, Jumat: Sate ayam. Buatlah program yang
menampilkan menu makanan berdasarkan input hari yang diberikan oleh pengguna.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int menu_makanan;
    printf("masukan hari untuk melihat menu (senin - jumat) = (1 - 5): ");scanf("%d",&menu_makanan);
    switch (menu_makanan) {
    case 1:printf("menu saat ini adalah nasi goreng \n");   break;
    case 2:printf("menu saat ini adalah mie ayam \n"); break;
    case 3:printf("menu saat ini adalah soto ayam \n"); break;
    case 4:printf("menu saat ini adalah nasi padang\n"); break;
    case 5:printf("menu saat ini adalah sate ayam\n"); break;
    default: break;
    }
   return 0;
}