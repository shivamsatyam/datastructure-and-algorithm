#include<stdio.h>
#include<stdlib.h>

//best case time complexcity the array is in ascending order=> O(n^2)

//worst case time complexcity the array is in decending order=> O(n^2)


void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionsort(int arr[],int n){
	int i,j,index;
	for(i=0;i<n-1;i++){
		index = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[index]){
				index = j;
			}
		}
		swap(&arr[i],&arr[index]);
	}	
	
}

void show(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}

int main(){
	
	int arr[] = {40,20,60,10,50,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	show(arr,n);
	selectionsort(arr,n);
	show(arr,n);
	return 0;
}

























