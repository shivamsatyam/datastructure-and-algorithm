#include<stdio.h>
#include<stdlib.h>

void display(int array[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",array[i]);
	}
}
int sortedInsertion(int arr[], int size, int element, int capacity, int index){
	if(size==capacity){
		printf("The capacity of the array is at the full level\n");
		return -1;
	}
	int i;
	for(i=size-1;i>=index;i--){
		 arr[i+1]=arr[i];
	}
	arr[index] = element;
	return 1;
}


int main(){
	int arr[100] = {7,8,12,27,88};
	int size = 5; //size of the array;
	int element = 45; //this the number which we have to insert in the array
	display(arr,4);
	int capacity = 100; // capacity of the array that is 100
	int index = 2; //the place the the inserted no to be insert
	sortedInsertion(arr,size,element,capacity,index);
	size+=1;
	int f;
	printf("\n");
	display(arr,size);
	return 0;
}











