#include <stdio.h>
#include <string.h>

int main(){
    char nama[20], nim[10], alamat[30];
    int usia;

    printf("Masukkan nama : "); //nama : Clarissa 
    scanf("%s", &nama); 
    printf("Masukkan nim : "); //nim : 245790
    scanf("%s", &nim);
    printf("Masukkan usia : "); //usia : 18
    scanf("%d", &usia);
    printf("Masukkan alamat : "); //alamat : Jln. Kenanga Raya No.23
    scanf(" %[^\n]s", &alamat);
    //scanf("%s", &alamat);

    printf("\n%s memiliki nim %s dengan usia %d dan tinggal di %s", nama, nim, usia, alamat);
    //printf("\n%s memiliki nim %d dengan usia %d dan tinggal di %s", nama, nim, usia alamat);

    return 0;
}