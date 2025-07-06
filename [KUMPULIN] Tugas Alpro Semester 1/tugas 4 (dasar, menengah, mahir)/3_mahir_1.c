#include <stdlib.h>
#include <stdio.h>

/*
menentukan lama jam bekerja"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int jammasuk, jamkeluar, lamabekerja1 ;
    printf("jam masuk anda : "); scanf("%d",&jammasuk);
    printf("jam keluar anda  :"); scanf("%d",&jamkeluar);
    
 if (jamkeluar > jammasuk) {
    lamabekerja1 = jamkeluar - jammasuk; 
    printf("anda bekerja selama %d", lamabekerja1);
 } else {
    lamabekerja1 = (jamkeluar+12) - jammasuk; 
        printf("anda bekerja selama %d jam", lamabekerja1);
 }

   return 0;
}

// jam tsb + 12 