#include<stdio.h>
#include<stdlib.h>


void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Element: %d\n",arr[i]);
	}
	printf("\n");
}

int selectionsort(int arr[],int n){
	int i,j,num;
	for(i=0;i<n-1;i++){
		num = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[num]){
				num = j;
			}
		}
		swap(&arr[i],&arr[num]);
	}
}


int main(){
	int array[] = {64,23,12,22,11};	
	int n = sizeof(array)/sizeof(array[0]);
	display(array,n);
	selectionsort(array,n);
	display(array,n);
	return 0;
}
































