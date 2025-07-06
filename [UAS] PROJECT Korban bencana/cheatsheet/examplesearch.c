/*
Dibuat oleh: Jajang Kusnendar
Tanggal: 26 November 2024
Sekuensial Search untuk Angka
*/
#include<stdio.h>
#include<string.h>
typedef struct 
{
    char nim[10];
    char nama[50];
    float nilai;
}Mahasiswa;
int n=5;//banyak data
Mahasiswa Mhs[5]={
    {"2406872","Ali Imron", 90.50},
    {"2406873","Ani Nurani", 80.45},
    {"2406874","Beni Sukmana", 87.55},
    {"2406875","Cepi Triadi", 80.50},
    {"2406876","Dinda Agustin", 92.68}
};
int main()
{
    char nim_cari[10];
    float nilai_cari;
    int i, ketemu;
    printf("Masukan Nilai yang dicari:");
    scanf("%f",&nilai_cari);
    i = 0;

    while((i<n) && (Mhs[i].nilai != nilai_cari)){
        i++;
    }
   
    if (Mhs[i].nilai == nilai_cari){
        printf("Data Mahasiswa yang nilai %f\n",Mhs[i].nilai);
        printf("NIM : %s\n",Mhs[i].nim);
        printf("Nama : %s\n",Mhs[i].nama);
        
    } else {
        printf("Data Mahasiswa yang nilai %f tidak ditemukan\n", nilai_cari);
    }

    return 0;
}