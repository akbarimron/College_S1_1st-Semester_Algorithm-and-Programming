#include <stdio.h>

int main(){
    int nilai_uts, nilai_tugas, nilai_uas, nilai_kuis;
    float rata2;

    printf("Masukkan nilai kuis :");
    scanf("%d", &nilai_kuis);
    printf("Masukkan nilai tugas :");
    scanf("%d", &nilai_tugas);
    printf("Masukkan nilai UTS :");
    scanf("%d", &nilai_uts);
    printf("Masukkan nilai UAS :");
    scanf("%d", &nilai_uas);

    rata2 = (nilai_kuis + nilai_tugas + nilai_uts + nilai_uas)/4;

    printf("Rata-rata nilai adalahh %.2f", rata2);

    return 0;
}