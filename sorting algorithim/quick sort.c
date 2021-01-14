#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void show(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}printf("\n");
}

int partition(int A[],int low,int high){
	int pivot = A[low];
	int i=low+1;
	int j = high;
	int temp;

	do{
		while(A[i]<=pivot){
			i++;
		}
		while(A[j]>pivot){
			j--;
		}
		
		if(i<j){
			temp  = A[i];
			A[i] = A[j];
			A[j] = temp;	
		}
	}while(i<j);
	
	temp  = A[low];
	A[low] = A[j];
	A[j] = temp;	
	
	return j;

}

void quicksort(int A[],int low,int high){
	int partitionindex;
	partitionindex = partition(A,low,high);
	
	if(low<high){
		quicksort(A,low,partitionindex-1); //sort left subarray
		quicksort(A,partitionindex+1,high); //sort right subarray
	}	
}

int main(){
	
	int arr[] = {3,5,2,563,4,5,13,12};
	int n = sizeof(arr)/sizeof(arr[0]);
	show(arr,n);
	quicksort(arr,0,n-1);
	show(arr,n);
	return 0;


}

























