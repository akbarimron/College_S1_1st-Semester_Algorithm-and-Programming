/*1 mobil hanya dapat terisi oleh 7 penumpang, maka jika mobil terisi lebih dari 7 menumpang
orang ke delapan akan mengisi mobil selanjutnya. Asumsikan ada 9 orang yang menaiki mobil
tersebut maka akan ada 2 mobil yang akan di tumpangi. Buatkan kode program dari kondisi
tersebut.*/

#include <stdio.h>
int main(){
int Angkot = 0, BUS = 0, penumpang,Pcowo, Pcewe;
printf("berapa penumpang laki2 :: "); scanf("%d",&Pcowo);
printf("berapa penumpang perempuan :: "); scanf("%d",&Pcewe);
penumpang = Pcowo + Pcewe;

if (Pcowo < Pcewe) {
    printf("metode transportasi yang dipilih adalah angkot (kapasitas 8 orang)\n");
    if (penumpang % 8 == 1) {
    Angkot += (penumpang / 8) + 1;
    printf("jumlah Angkot = %d", Angkot);
} else {
    Angkot += (penumpang / 8);
    printf("jumlah Angkot = %d", Angkot);
    }

} else {
    printf("metode transportasi yang dipilih adalah BUS (kapasitas 12 orang)\n");
    if (penumpang % 12 == 1) {
        BUS += (penumpang / 12) + 1;
        printf("jumlah BUS = %d", BUS);
    } else {
        BUS += (penumpang / 12);
        printf("jumlah BUS = %d", BUS);
        }

} 



// laki2 lebih banyak + perempuan = bis 12
// cewek lebih banyak dari cewek = angkot 8

// penumpang + 6 / 7
    /*
} else {
    if (penumpang > 7)
    lebih = penumpang % 7;
    berapa = penumpang / 7;
    if (lebih = 0) {
        printf("%d", mobil * berapa);
    } else {
        if (lebih < 7 && lebih >= 1)
        {
            hasil 
        }   
    }
    printf("jumlah mobil =");
} 
    */


return 0;
}