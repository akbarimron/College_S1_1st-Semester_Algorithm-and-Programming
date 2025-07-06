/*
Pembuat:Jajang Kusnendar
Tanggal dibuat: 04 November 2024
https://onlinegdb.com/bWQBN6vqN

*/
#include <iostream>
using namespace std;
#include <string>
struct Mahasiswa{
        string nim;
        string nama;
        int nilai;
};
int main(){
      int i,total,idxMax,max,n=3;
      float average;
      struct Mahasiswa mhs[3]={{"1201","Alif",90},{"1202","Beni",80},{"1203","Ciya",85}};
      //menentukan nilai terbesar
      idxMax=0;
      //max=mhs[0].nilai;
      for(i=1;i<3;i++){
          if(mhs[i].nilai>mhs[idxMax].nilai){
              idxMax=i;
          }
      }
      //menentukan nilai rata-rata
      total=0;
      for(i=0;i<3;i++){
        total=total+mhs[i].nilai;
      }
      average=total/3;
      printf("Data Nilai Mahasiswa\n");
      printf("===================\n");
      cout<<"NO NIM   Nama  Nilai"<<endl;
      printf("===================\n");
      for(i=0;i<3;i++){
        cout<<i+1<<"  "<<mhs[i].nim<<"  "<<mhs[i].nama<<"  "<<mhs[i].nilai<<endl;
      }
      printf("===================\n");
      printf("Average:%.2f\n",average);
      cout<<"nilai tertinggi:"<<mhs[idxMax].nilai<<endl;
      cout<<"nim :"<<mhs[idxMax].nim<<endl;
      cout<<"nama mahasisa:"<<mhs[idxMax].nama<<endl;
      return 0;
}