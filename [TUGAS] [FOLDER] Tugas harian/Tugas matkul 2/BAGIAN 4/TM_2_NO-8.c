#include <stdlib.h>
#include <stdio.h>
/*.
S.studi Kasus 8: Penentuan Jurusan Sekolah
Seorang siswa di SMA memiliki pilihan jurusan dengan kode: 1 untuk IPA, 2 untuk IPS, dan
3 untuk Bahasa. Buatlah program yang menampilkan nama jurusan berdasarkan kode yang
dipilih oleh siswa.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    int kode_jurusan;
    printf("apa kode jurusan anda (1 = IPA) (2 = IPS). (3=Bahasa):");scanf("%d",&kode_jurusan);
    switch (kode_jurusan) {
    case 1:printf("Anda memilih jurusan IPA \n");   break;
    case 2:printf("Anda memilih jurusan IPS\n"); break;
    case 3:printf(" Anda memilih jurusan bahasa\n"); break;
    default: break;
    }
   return 0;
}