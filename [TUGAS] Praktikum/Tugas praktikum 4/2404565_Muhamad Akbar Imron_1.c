/*
Subhan bingung membedakan antara huruf vokal dan huruf konsonan. Nah kita bantu yuk untuk membuat program yang dapat membedakan mana huruf vokal dan huruf konsonan. Misalkan Subhan menerima inputan tiga buah karakter, periksalah apakah karakter tersebut termasuk huruf konsonan atau vokal? Kemudian cetak berdasarkan jenisnya! (inputannya huruf yaa dan huruf kecil bukan kapital).
Contoh:
*/

#include <stdio.h>

int main() {
    char huruf1, huruf2, huruf3;
    
    printf("Masukkan huruf (): "); scanf("%c%c%c", &huruf1, &huruf2, &huruf3);

    if (huruf1 == 'a' || huruf1 == 'i' || huruf1 == 'u' || huruf1 == 'e' || huruf1 == 'o' ) {
        printf("huruf1 ==  vokal.\n");
    } else {
        printf("huruf1 =  konsonan.\n");
    }

     if (huruf2 == 'a' || huruf2 == 'i' || huruf2 == 'u' || huruf2 == 'e' || huruf2 == 'o' ) {
        printf("huruf1 =  vokal.\n");
    } else {
        printf("huruf1 =  konsonan.\n");
    }

     if (huruf3 == 'a' || huruf3 == 'i' || huruf3 == 'u' || huruf3 == 'e' || huruf3 == 'o' ) {
        printf("huruf1 =  vokal.\n");
    } else {
        printf("huruf1 =  konsonan.\n");
    }

    return 0;
}