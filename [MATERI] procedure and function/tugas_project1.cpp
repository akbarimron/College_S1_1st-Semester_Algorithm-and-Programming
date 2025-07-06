#include <stdlib.h>
#include <stdio.h>
struct barang{
        char nama[20];
        float harga;
        int stok;
      };
struct barang brg[100]={{"hd",500,10},{"mb",430,20}};
void display(int nData){
	int i;
	printf("Daftar nama barang:\n");
	printf("No Nama  Harga  Stok\n");
	printf("====================\n");
	for(i=0;i<nData;i++){
      	printf("%d  %s    %.2f   %d\n",i,brg[i].nama,brg[i].harga,brg[i].stok);
	}
	printf("====================\n");
}   
void barangKeluar(){
	int urutan,jmlKeluar;
	display(2);
	printf("no urut barang: ");scanf("%d",&urutan);
	printf("jumlah keluar: ");scanf("%d",&jmlKeluar);
	brg[urutan].stok=brg[urutan].stok-jmlKeluar;
	display(2);
}  
void barangMasuk(){
	int urutan,jmlMasuk;
	display(2);
	printf("no urut barang: ");scanf("%d",&urutan);
	printf("jumlah keluar: ");scanf("%d",&jmlMasuk);
	brg[urutan].stok=brg[urutan].stok+jmlMasuk;
	display(2);
}  

void editBarang(){
	int urutan,editbarang;
    display(2);
	printf("no urut barang: ");scanf("%d",&urutan);
	printf("jumlah keluar: ");scanf("%d",&editbarang);
	brg[urutan].stok=brg[urutan].stok+brg[urutan].stok;
	brg[urutan].stok=editbarang;
    display(2);
}
void menu(){
	int pilih;
	do{
		printf("Menu Utama\n");
		printf("==========\n");
		printf("[1]Display Data Barang\n");
		printf("[2]Transaksi Pengeluaran\n");
		printf("[3]Transaksi Pemasukan\n");
		printf("[4]Edit Stock\n");
		printf("[5]Masukan Pilihan:[1][2][3] atau [0] untuk exit:");scanf("%d",&pilih);
		switch(pilih){
	    	case 1:
				display(2);break;
			case 2:
				barangKeluar();break;
			case 3:
				barangMasuk();break;
			case 4:
				editBarang();break;
	    };		
	}while(pilih!=0);
	
}
int main(){
      int i;
      //display(2);
      //barangKeluar();
      menu();
      system("PAUSE");
      return 0;
}