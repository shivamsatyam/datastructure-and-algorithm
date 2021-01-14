#include<stdio.h>

int methodone(int arr[],int size){
	int i,j,num;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]<arr[j]){
				break;
			}else{
				
			}
		}
		if(j==size){
			printf("%d ",arr[i]);
		}
	}
	printf("%d ",arr[size-1]);
}
//
//01 1 
//00 0
//11 0
//10 1

int methodtwo(int arr[],int size){
	int i,j;
	j = arr[size-1];
//	printf("%d");
	for(i=size-2;i!=0;i--){
		if(arr[i]>j){
			j = arr[i];
			printf("%d ",arr[i]);
		}
	}
	printf("%d ",arr[size-1]);
	
}

int main(){
	
	int arr[] = {16,17,4,3,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	methodtwo(arr,n);
	
	return 0;
}







































