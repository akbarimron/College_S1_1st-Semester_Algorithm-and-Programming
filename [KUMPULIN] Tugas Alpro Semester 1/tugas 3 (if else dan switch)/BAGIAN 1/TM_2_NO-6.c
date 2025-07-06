#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 6: Baterai Ponsel
Seorang pengguna ponsel ingin mengetahui kapan baterainya harus diisi ulang. Jika baterai
ponselnya lebih dari 20%, dia tidak perlu mengisi ulang segera. Buatlah program yang
memeriksa kapasitas baterai dan menampilkan pesan "Baterai cukup." jika kapasitas baterai
lebih dari 20%.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int baterai_ponsel;
    printf("Baterai ponsel:");scanf("%d",&baterai_ponsel);
    if (baterai_ponsel > 20) {
        printf("Baterai cukup");
    };
   return 0;
}
