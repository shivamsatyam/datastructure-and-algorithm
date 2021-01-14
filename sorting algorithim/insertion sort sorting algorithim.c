#include<stdio.h>
#include<stdlib.h>


void show(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}

void insertionSort(int arr[],int n){
	int i,key,j;
	for(i=1;i<n;i++){
		key = arr[i];
		j = i-1;
		
		while(arr[j]>key && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
		
	}
}


int main(){
	int arr[] = {12,11,13,5,6};
	int n  =sizeof(arr)/sizeof(arr[0]);
	
	show(arr,n);
	insertionSort(arr,n);
	show(arr,n);
	
	return 0;
}


















































