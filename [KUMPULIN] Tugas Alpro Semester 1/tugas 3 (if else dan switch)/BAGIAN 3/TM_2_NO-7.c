#include <stdlib.h>
#include <stdio.h>
/*
Studi Kasus 7: Penilaian Kelulusan Ujian Nasional
Untuk lulus Ujian Nasional, seorang siswa harus memiliki nilai rata-rata lebih dari 70. Jika
nilai rata-ratanya lebih dari 70, program akan memeriksa nilai minimal tiap mata pelajaran.
Jika ada mata pelajaran dengan nilai kurang dari 50, siswa tetap dianggap tidak lulus. Jika tidak
ada, siswa lulus.

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B
Tanggal         : 19 September 2024

*/
int main() {
    float rata_rata, mtk, pai, pbi;
    printf("nilai rata_rata anda : ");scanf("%f",&rata_rata);
    if (rata_rata > 70 ) {
        printf("nilai mtk anda : "); scanf("%f", &mtk);
        if (mtk > 50) {
            printf("berpaa nilai pai anda : "); scanf("%f", &pai);
            if (pai > 50) {
                printf("berpaa nilai pbi anda: "); scanf("%f", &pbi);
                if (pbi > 50) {
                    printf("anda lulus");
                } else {
                    printf("anda tidak lulus");
                };
            } else {
                printf("anda tidak lulus");
            }
        }else {
            printf("anda tidak lulus");
        }
    } else {
        printf("anda tidak lulus");
    };
   return 0;
}