#include<stdio.h>

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


void selectionSort(int arr[],int n){
	int i,j,min_idx;
	// one by one move boundary of unsorted array
	for(i=0;i<n-1;i++){
		//find the maximun element in unsorted array
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx = j;
			}
			
		}
		swap(&arr[min_idx],&arr[i]);
	}
	
}


void show(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("Element: %d\n",arr[i]);
	}
}

int main(){
	
	int a=12;
	int b = 34;
	int arr[] = {0,23,14,12,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	show(arr,n);
	selectionSort(arr,n);
	printf("\n\n");
	show(arr,n);
	return 0;
}































