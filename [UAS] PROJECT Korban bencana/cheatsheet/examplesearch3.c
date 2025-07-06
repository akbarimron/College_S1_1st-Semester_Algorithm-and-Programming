/*
Dibuat oleh: Jajang Kusnendar
Tanggal: 26 November 2024
Binarysearch, syarat data sudah terurut asc (untuk kasus ini)
*/
#include<stdio.h>
int A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main()
{
    int i,j,bil_cari,tengah,ketemu,jmlTebakan;
    jmlTebakan=0;
    i = 0;//batas kiri
    j = 19;// batas kanan
    bil_cari = 12;
    ketemu = 0;//false
    while ((ketemu == 0) && (i <= j))
    {
        tengah = (i+j)/2;
        jmlTebakan++;
        if(A[tengah] == bil_cari)//selalu mencari di nilai tengah
        {
            ketemu = 1;//menandakan ketemu, dan akan menyebabkan pencarian berhenti
            i = tengah;
        }
        else
        {
            printf("index ke %d\n", tengah);
            if(A[tengah]>bil_cari)
            {
                j = tengah - 1; // ubah batas kanan
            }
            else
            {
                i = tengah + 1; //ubah batas kiri
            }
        }
    }

    if(ketemu == 1)//data ditemukan
    {
        printf("Data:%d, ditemukan pada index:ke-%d usaha pencarian:%dx\n", bil_cari,i,jmlTebakan);
    }
    else//data tidak ditemukan
    {
        printf("Data tidak ditemukan\n");
    }
    
    return 0;
}