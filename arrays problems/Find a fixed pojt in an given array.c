#include<stdio.h>

int linearSearch(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		if(abs(arr[i])==i){
			printf(" The element is %d\n",arr[i]);
			break;
		}
			
	}
}

int binarySearch(int arr[],int size){
	int high=size-1;
	int low=0;
	int mid;
	while(high>=low){
		mid = (high+low)/2;
		if(abs(arr[mid])==mid){
			printf("The element found %d\n\n\n\n\n",arr[mid]);
			break;
		}else if(abs(arr[mid])<mid){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
}


int main(){
	int arr[] = {-10,-5,0,3,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	binarySearch(arr,n);
	return 0;
}



























