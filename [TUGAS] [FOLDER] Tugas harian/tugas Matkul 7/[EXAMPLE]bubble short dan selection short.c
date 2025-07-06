//algoritma tukar
void tukar (int &a, int &b){
	int temp, a, b;
	temp=a;
	a=b;
	b=temp;
}
//bubble sort
for (i=0;i<n-1;i++){
		for(j=n-1;j>0;j--){
			if(A[j]<A[j-1]){
				tukar(A[j],A[j-1]);
			}
		}
}
//selection sort
for (i=0;i<n-1;i++){
		iMin=i;
		for(j=i+1;j<n;j++){
			if(A[j]<A[iMin]){
				iMin=j;
			}
		}
		tukar(A[i],A[iMin]);
}