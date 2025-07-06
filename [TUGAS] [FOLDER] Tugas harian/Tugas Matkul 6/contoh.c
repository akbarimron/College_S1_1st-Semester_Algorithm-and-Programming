#include <stdio.h>
#include <stdlib.h>
struct ideal{
    int tinggi;
    int berat;
};
int main(){
    int i,j;
    struct ideal bb[5]={{160,60},{160,75},{150,50},{170,60},{150,30}};
    printf("Kalkulator Berat Badan Ideal\n");
    for(i=0;i<5;i++){
        if(bb[i].tinggi-100==bb[i].berat){
             printf("Berat badan anda %d termasuk Ideal untuk tinggi %d\n",bb[i].berat,bb[i].tinggi);  
        }
        if(bb[i].tinggi-100>bb[i].berat){
             printf("Berat badan anda %d termasuk Gemuk untuk tinggi %d\n",bb[i].berat,bb[i].tinggi);  
        }
        if(bb[i].tinggi-100<bb[i].berat){
             printf("Berat badan anda %d termasuk Kurus untuk tinggi %d\n",bb[i].berat,bb[i].tinggi);  
        }
       
    }
}