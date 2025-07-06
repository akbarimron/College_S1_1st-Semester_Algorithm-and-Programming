#include <stdio.h>
#include <stdlib.h>
//DISELESAIKAN OLEH :
//MUHAMAD AKBAR IMRON 2404565

int main(){
//program konversi cm ke inci
float ukuran_cm, hasil;

//proses input
printf("Masukan Cm :"); scanf("%f", &ukuran_cm);

//konversi cm ke inci
hasil = ukuran_cm * 2.54;

printf("Ukuran inci: %.2f", hasil);
return 0;
}