#include <stdio.h>
#include <stdlib.h>

int main(){
int alas,tinggi_a,tinggi,volume; //deklarasi variabel

//Salin program tersebut, lalu jalankan!
//proses input
printf("Program menghitung volume prisma segitiga\n");
printf("Masukkan alas (cm) : ");
scanf("%d", &alas);
printf("Masukkan tinggi alas (cm) : ");
scanf("%d", &tinggi_a);
printf("Masukkan tinggi (cm) : ");
scanf("%d", &tinggi);

//proses menghitung volume segitiga
volume=((alas*tinggi_a)/2)*tinggi;

//output volume segitia
printf("\nVolumenya adalah: %d cm^3", volume);

return 0;
}