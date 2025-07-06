#include <stdlib.h>
#include <stdio.h>

/*
menentukan lama waktu menit"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/

// var biaya
// ganti lamabekerja1 -> lamabekerja
int main() {
    int jammasuk, jamkeluar, lamabekerja1, jammasukmenit, jamkeluarmenit, menit ;
    printf("jam masuk anda : "); scanf("%d",&jammasuk);
    printf("menit jam masuk  :"); scanf("%d",&jammasukmenit);
    printf("jam keluar anda : "); scanf("%d",&jamkeluar);
    printf("menit jam keluar  :"); scanf("%d",&jamkeluarmenit);
    
 if (jamkeluar >= jammasuk) {
    if (jammasukmenit + jamkeluarmenit == 0) {
        lamabekerja1 = jamkeluar - jammasuk;
         menit = jamkeluarmenit + jammasukmenit; 
        printf("anda bekerja selama %d jam %d", lamabekerja1, menit);
        return 0;  // jika jam keluar == jam masuk, maka jam bekerja hanya 1 jam
    } else {
        lamabekerja1 = jamkeluar - jammasuk - 1; 
        menit = jamkeluarmenit + jammasukmenit; 
        if (menit <60) {
            printf("anda bekerja selama %d jam %d menit",lamabekerja1, menit);
        } else {
            lamabekerja1 = lamabekerja1 + 1;
            menit = menit - 60;
            printf("anda bekerja selama %d jam %d menit",lamabekerja1, menit);
    }
    }
 } else {
    if (jammasukmenit + jamkeluarmenit == 0) {
        lamabekerja1 = (jamkeluar+12) - jammasuk; 
        menit = jamkeluarmenit + jammasukmenit; 
        printf("anda bekerja selama %d jam %d", lamabekerja1, menit);
    } else {
            lamabekerja1 = (jamkeluar+12) - jammasuk - 1; 
            menit = jamkeluarmenit + jammasukmenit; 
        if (menit <60) {
            printf("anda bekerja selama %d jam %d menit",lamabekerja1, menit);
        } else {
            lamabekerja1 = lamabekerja1 + 1;
            menit = menit - 60;
            printf("anda bekerja selama %d jam %d menit",lamabekerja1 , menit);
    }
    }
 }




   return 0;
}

// jam tsb + 12 