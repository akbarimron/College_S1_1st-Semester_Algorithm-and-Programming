/*
Nama: Muhamad Akbar Imron
NIM: 2404565
Keterangan: bubble sort - terbesar dari kiri
*/

#include<stdio.h>
#include<stdlib.h>

void tukar(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble(int nilai[], int panjang_array){
	for(int i = (panjang_array - 1); i>0 ; --i){

		for(int j = (panjang_array - 1); j>(panjang_array - 1) - i; --j){
			if(nilai[j]>nilai[j-1]){

				tukar(&nilai[j-1], &nilai[j]);

				for (int k = 0; k < panjang_array; ++k){
					printf("%d ", nilai[k]);
				}
				printf("\n");
				}
			}
		}
	}



int main(){
	int nomor;
	int nilai[1000];
	
	printf("input jumlah nilai:");scanf("%d",&nomor);
	for(int i=1; i<=nomor; i++){
		printf("input nilai ke-%d: ",i);scanf("%d",&nilai[i-1]);
	}

	bubble(nilai, nomor);
	return 0;
}