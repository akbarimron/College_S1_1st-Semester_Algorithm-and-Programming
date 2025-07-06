/*Buatlah program yang dapat menghitung jumlah amoeba, dengan input user berupa jumlah
amoeba awal dan waktu (amoeba akan membelah diri menjadi dua setelah 15 menit), output
dari program merupakan jumlah amoeba akhir sesuai dengan input waktu yang diinputkan oleh
user!*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//DISELESAIKAN OLEH :
//MUHAMAD AKBAR IMRON 2404565

int main(){

int amoeba, waktu, amoeba_akhir, waktu_belah;
printf("masukan jumlah amoeba awal :"); scanf("%d", &amoeba);
printf("masukan waktu dalam menit :"); scanf("%d", &waktu);

waktu_belah = waktu / 15;
amoeba_akhir = amoeba * (pow(2, waktu_belah));

  //Un =a.r^n
  ;
    //amoeba_akhir = pow(amoeba_akhir, waktu_belah);

/*
if (amoeba > 1) {
    amoeba_akhir = pow(amoeba_akhir, waktu_belah);

} else if (amoeba = 1) {
    amoeba_akhir = amoeba + 1;
    amoeba_akhir = pow(amoeba_akhir, waktu_belah);

} else {
    printf("ya gak bisa lah");

    }
*/


printf("jumlah amoeba akhir setelah %d menit adalah %d", waktu, amoeba_akhir);
return 0;
}