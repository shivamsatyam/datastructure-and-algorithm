#include<stdio.h>
#include<stdlib.h>


void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionsort(int arr[],int n){
	int i,j,num;
	for(i=0;i<n-1;i++){
		num = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[num]){
				num = j;
			}
		}
		swap(&arr[num],&arr[i]);
	}
}

int difference(int arr[],int n){
	int i;
	int diff = abs(arr[0] - arr[1]);
	for(i=0;i<n-1;i++){
		if(abs(arr[i]-arr[i+1]) <diff ){
			diff = abs(arr[i] - arr[i+1]);
		}
	}
	printf("The minimum defference is %d ",diff);
	
}

int main(){
//	int arr[] = {1,5,3,19,18,25};
//	int arr[] = {30,5,20,9};
	int arr[] = {1,19,-4,31,38,25,100};
	int size = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,size);
	difference(arr,size);
	return 0;
}

















































