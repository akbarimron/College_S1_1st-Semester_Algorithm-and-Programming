/*
Nama: Muhamad Akbar Imron
NIM: 2404565
Keterangan: selection sort - terbesar dari kiri
*/

#include<stdio.h>
#include<stdlib.h>

void tukar(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection(int nilai[], int panjang_array){
	int index_maks;
	for(int i = 0; i < panjang_array - 1; ++i){
		index_maks = i;
		for (int j = i; j < panjang_array; ++j){
			if(nilai[j] > nilai[index_maks]){
				index_maks = j;
			}
		}
		tukar(&nilai[i], &nilai[index_maks]);
		for(int k = 0; k < panjang_array; ++k){
			printf("%d ", nilai[k]);
		}
		printf("\n");
	}
}



int main(){
	int nomor;
	int nilai[1000];
	
	printf("input jumlah nilai:");scanf("%d",&nomor);
	for(int i=1; i<=nomor; i++){
		printf("input nilai ke-%d: ",i);scanf("%d",&nilai[i]);
	}

	selection(nilai, nomor);
	return 0;
}

//bikin for dan input untuk program rancom