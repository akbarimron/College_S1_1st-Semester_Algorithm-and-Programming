#include <stdlib.h>
#include <stdio.h>

/*
menentukan biaya parkir"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/

// var biaya
// ganti lamabekerja1 -> lamabekerja
int main() {
    int jammasuk, jamkeluar, lamabekerja1,biaya ;
    printf("jam masuk anda : "); scanf("%d",&jammasuk);
    printf("jam keluar anda  :"); scanf("%d",&jamkeluar);
    
 if (jamkeluar > jammasuk) {
    lamabekerja1 = jamkeluar - jammasuk; 
    printf("anda bekerja selama %d\n", lamabekerja1);
   
    if (lamabekerja1 <= 2){
        biaya = 1500;
       printf("biaya parkir anda adalah %d", biaya);
    } else {
          biaya = 1500 + (1000 * (lamabekerja1 - 2));
          printf("biaya parkir anda adalah %d", biaya);
    }
 } else {
    lamabekerja1 = (jamkeluar+12) - jammasuk; 
        printf("anda bekerja selama %d jam", lamabekerja1);
         if (lamabekerja1 <= 2){
            biaya = 1500;
            printf("biaya parkir anda adalah %d", biaya);
         } else {
            biaya = 1500 + (1000 * (lamabekerja1 - 2));
            printf("biaya parkir anda adalah %d", biaya);
         
    }
 }




   return 0;
}

// jam tsb + 12 