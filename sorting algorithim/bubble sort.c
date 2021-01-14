#include<stdio.h>
#include<stdlib.h>


void swap(int *a, int *b){
	int tem = *a;
	*a = *b;
	*b = tem;
}


void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void bubblesort(int arr[],int n){
	int i,j,temp;
	int sorted=0;
	for(i=0;i<n-1;i++){
		printf("working on element");
		sorted=1;
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				sorted=0;
			}
			
		}
		if(sorted){
			return;
		}
	}
	
}

int main(){
	
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	display(arr,n);
	bubblesort(arr,n);
	display(arr,n);
	
	return 0;
}

















































