#include<stdio.h>


int odd(int arr[],int n){
	int i;
	int res=0;
	for(i=0;i<n;i++){
		res = res^arr[i];
	}
	printf(" %d ",res);
}


int main(){
	int arr[] = {2,3,5,4,5,2,4,3,5,2,4,4,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	odd(arr,n);
	
	return 0;
}
































