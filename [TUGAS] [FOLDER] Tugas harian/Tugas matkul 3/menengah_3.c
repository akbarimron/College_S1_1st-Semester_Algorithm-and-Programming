#include <stdlib.h>
#include <stdio.h>

/*
menentukan nilai mahasiswa"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    float UTS, UAS, TUGAS, HASIL;
   
    printf("masukan bilangan UTS: "); scanf("%f",&UTS);
    printf("masukan bilangan UAS: "); scanf("%f",&UAS);
    printf("masukan bilangan TUGAS:  "); scanf("%f",&TUGAS);

UTS= UTS * 35/100;
UAS= UAS * 45/100;
TUGAS= TUGAS * 20/100;

HASIL = UTS + UAS + TUGAS;


/*
A = 80 <= HASIL <=100
B = 70 <= HASIL < 80
C = 50 <= HASIL < 70
D = 40 <= HASIL < 50
E = 40 > HASIL  
*/
    if (HASIL >= 80 && HASIL <=100) {
        printf("NILAI ANDA SEMPURNA %.2f, (A)", HASIL);
    } else if (HASIL >= 70 && HASIL <80) {
        printf("NILAI ANDA %.2f, (B)", HASIL);
    } else if (HASIL >= 50 && HASIL <70) {
        printf("NILAI ANDA %.2f, (C)", HASIL);
    } else if (HASIL >= 40 && HASIL <50) {
        printf("NILAI ANDA %.2f, (D)", HASIL);
    } else if (HASIL < 40) {
        printf("NILAI ANDA %.2f, (E)", HASIL);
    }

   return 0;
}