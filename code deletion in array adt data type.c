#include<stdio.h>
#include<stdlib.h>

void display(int array[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",array[i]);
	}
	printf("\n");
}

int  deletelement(int array[], int size, int index){
	int i;
//	if(index<=0){
//		printf("The given index is not well definded\n");
//		return -1;
//	}
//	
	for(i=index;i<size;i++){
		array[i] = array[i+1];
	}
}

int main(){
	int arr[100] = {7,8,45,455,12,27,88};
	int size = 5;
	int index = 3;
	
	display(arr,size);
	deletelement(arr,size,index);
	size-=1;
	display(arr,size);
	return 0;
}











