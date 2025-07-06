#include <stdio.h>
int main(){
int nilaiAkhir;

printf("input nilai: "); scanf("%d", &nilaiAkhir);

if (nilaiAkhir  > 75 && nilaiAkhir <= 100) {
    printf("lulus");
} 

//misalkan nilai akhirnya benilai 150
//kondisinya: jika nilai akhir lebih besar dari 75 dan nilai akhir kurang dari sama dengan 100 maka cetak lulus
printf("selesai");
return 0;
}