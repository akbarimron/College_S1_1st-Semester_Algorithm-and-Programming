/*
Membuat tampilan MENU untuk menghitung luas bangun, contoh tampilan:
MENU UTAMA:
[1] Luas Segitiga
[2] Luas Persegipanjang
[3] Exit
Masukan pilihan anda:_
- Jika user memasukan no 1, maka program akan meminta untuk memasukan alas dan
tinggi, kemudian mencetak Luas segitiga berdasarkan alas dan tinggi yang diinputkan,
Lalu program kembali ke MENU UTAMA. Selama user tidak memasukan no 3.
- Jika user memasukan no 2, maka program akan meminta untuk memasukan panjang
dan lebar, kemudian mencetak Luas segitiga berdasarkan alas dan tinggi yang
diinputkan, Lalu program kembali ke MENU UTAMA. Selama user tidak memasukan no 3
- Jika user memilih no 3, maka program berhenti (keluar).

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B


*/


#include <stdlib.h>
#include <stdio.h>

int main(){
    int i,alas, tinggi, pilih, Lpersegipanjang, panjang, lebar;
    float alasS, tinggiS, Lsegitiga;
    do{
        printf("\nMENU UTAMA : \n");
        printf("[1] Luas Segitiga\n");
        printf("[2] Luas Persegi Panjang\n");
        printf("[3] Exit\n");
        printf("Masukan Pilihan Anda: ");scanf("%d",&pilih);
        switch(pilih){
            case 1:
                printf("input alas: ");scanf("%f",&alasS);
                printf("input tinggi: ");scanf("%f",&tinggiS);
                Lsegitiga = alasS * tinggiS / 2.0;
                printf("Luas Segitiga = %.2f cm2\n",Lsegitiga);
                break;
            case 2:
                printf("input panjang: ");scanf("%d",&panjang);
                printf("input lebar: ");scanf("%d",&lebar);
                Lpersegipanjang = panjang * lebar;
                printf("Luas Persegi panjang = %d cm2\n",Lpersegipanjang);
                break;
        system('pause');
        system('cls');
        }
    }while(pilih!=3);
    printf("Program Selesai\n");
    
    return 0;
}