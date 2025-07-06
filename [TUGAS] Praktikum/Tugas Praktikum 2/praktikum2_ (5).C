
#include <stdio.h>

int main () {
  int nasi_goreng, mie_goreng, sate_ayam, Qng, Qmg, Qsa, hatot, total_qmg, total_qng, total_qsa;
// Nasi Goreng : Rp. 25.000
// Mie Goreng : Rp. 20.000
// Sate Ayam : Rp. 30.000
nasi_goreng= 25000;
mie_goreng=20000;
sate_ayam=30000;


printf("masukan jumlah pesanan\n");
printf("Nasi goreng (Rp. 25.000) : ");
scanf("%d", &Qng);
printf("Mie Goreng(Rp. 20.000) : ");
scanf("%d", &Qmg);
printf("Sate ayam (Rp. 30.000) : ");
scanf("%d", &Qsa);

total_qng = Qng * nasi_goreng;
total_qmg = Qmg * mie_goreng;
total_qsa = Qsa * sate_ayam;

hatot = total_qmg + total_qsa + total_qng;

printf("Total harga pesanan : %d", hatot);

return 0;
}