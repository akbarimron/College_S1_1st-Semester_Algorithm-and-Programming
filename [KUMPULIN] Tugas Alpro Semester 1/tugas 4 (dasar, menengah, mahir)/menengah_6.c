#include <stdlib.h>
#include <stdio.h>

/*
hari keberapa dalam tahun ajaran"

Dikerjakan Oleh : Muhamad Akbar imron
NIM             : 2404565
Kelas           : 1B

*/
int main() {
    int jan = 31,feb = 28 ,mar= 31,apr= 30,may= 31,june= 30,july= 31,aug= 30,sept= 31,okt= 30,nov= 31,bulan, hari, total;
    
    printf("masukan bulan ke berapa: "); scanf("%d",&bulan);
    printf("masukan hari "); scanf("%d",&hari);
    
    switch (bulan) {
    case 1:
    total = hari; 
    printf("total hari telah berlalu adalah %d", total);
      break;
    case 2:total = jan + hari;
    printf("total hari telah berlalu adalah %d", total);
     break;
    case 3:total =jan + feb + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 4:total =jan + feb + mar + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 5:total =jan + feb + mar + apr + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 6:total =jan + feb + mar + apr + may + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 7:total =jan + feb + mar + apr + may + june + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 8:total =jan + feb + mar + apr + may + june + july + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 9:total =jan + feb + mar + apr + may + june + july + aug + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 10: total = jan + feb + mar + apr + may + june + july + aug + sept + hari;
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 11:jan + feb + mar + apr + may + june + july + aug + sept + okt + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    case 12:jan + feb + mar + apr + may + june + july + aug + sept + okt + nov + hari; 
    printf("total hari telah berlalu adalah %d", total);
    break;
    default: break;
    } 


   return 0;
}