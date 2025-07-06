#include <stdio.h>

int main(){
// deklarasi variabel yang sesuai dengan isi program
int nilai_kuis, nilai_tugas, nilai_uas, nilai_uts, nilai_rata_rata;

printf("Masukkan nilai kuis :");
scanf("%d", &nilai_kuis);
printf("Masukkan nilai tugas :");
scanf("%d", &nilai_tugas);
printf("Masukkan nilai UTS :");
scanf("%d", &nilai_uts);
printf("Masukkan nilai UAS :");
scanf("%d", &nilai_uas);

//hitung rata-rata nilai
nilai_rata_rata=(nilai_kuis + nilai_tugas + nilai_uas + nilai_uts) / 4;

//tampilkan hasil perhitungan
printf("nilai rata-rata anda adalah  %d",nilai_rata_rata);
return 0;
}