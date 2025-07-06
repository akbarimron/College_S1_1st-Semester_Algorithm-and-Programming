/*Iqbal sebuah toko baru, bantu Iqbal untuk mengkategorikan barang barang yang akan dijual di tokonya,
1.
Kode kategori barang (huruf):
'A' untuk Elektronik
'B' untuk Pakaian
'C' untuk Makanan
2.
Kode jenis barang (angka):
Jika kategori barang 'A' (Elektronik), jenis barang:
1: Laptop
2: Smartphone
3: TV
Jika kategori barang 'B' (Pakaian), jenis barang:
1: Kemeja
2: Celana
3: Jaket
Jika kategori barang 'C' (Makanan), jenis barang:
1: Roti
2: Susu
3: Buah
*/
#include <stdio.h>
int main() {
    int elektronik, pakaian, makanan;
    char JENIS;
    printf("JENIS KATEGORI BARANG\n");
    printf("A. Elektronik\n");
    printf("B. Pakaian\n");
    printf("C. Makanan\n");

    printf("pilih kategori : ");scanf(" %s", &JENIS); 
    

    switch (JENIS) {
        case 'A':
            printf("JENIS BARANG ELEKTRONIK\n");
            printf("1. Laptop\n");
            printf("2. Smartphone\n");
            printf("3. TV\n");

             printf("pilih kategori (1 - 3): ");scanf(" %d", &elektronik); 
             switch (elektronik) {
                case 1: printf("anda memilih elektronik = LAPTOP"); break;
                case 2: printf("anda memilih elektronik = Smartphone"); break;
                case 3: printf("anda memilih elektronik = TV"); break;
                default:
                    printf("Jenis barang elektronik salah.\n");
                    return 1;
             }
            break;
        case 'B':
           printf("JENIS PAKAIAN\n");
            printf("1. Kemeja\n");
            printf("2. Celana\n");
            printf("3. jaket\n");

            printf("pilih kategori (1 - 3): ");scanf(" %d", &pakaian); 
            switch (pakaian) {
                case 1: printf("anda memilih pakaian = kemeja"); break;
                case 2: printf("anda memilih pakaian = celana"); break;
                case 3: printf("anda memilih pakaian = jaket"); break;
                default:
                    printf("Jenis barang pakaian salah.\n");
                    return 1;
             }
            break;
        case 'C':
            printf("JENIS KATEGORI MAKANAN\n");
            printf("1. Roti\n");
            printf("2. Susu\n");
            printf("3. Buah\n");

            printf("pilih kategori (1 - 3): ");scanf(" %d", &makanan); 
            switch (makanan) {
                case 1: printf("anda memilih makanan = Roti"); break;
                case 2: printf("anda memilih makanan = susu"); break;
                case 3: printf("anda memilih makanna = buah"); break;
                default:
                    printf("Jenis makanan tidak ada.\n");
                    return 1;
             }
            break;
        
        default:
            printf("kategori tidak ada.\n");
            return 1;
    }


    return 0;
}