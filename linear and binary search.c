#include<stdio.h>
#include<stdlib.h>

int linearsearch(int array[],int size,int element){
	int i;
	for(i=0;i<size;i++){
		if(array[i]==element){
			printf("The element found at index %d",i);
			return 1;
		}
	}	
}


int binarysearch(int arr[],int size,int element){
	int low,mid,high;
	low = 0;
	high = size;
	
	while(low<=high){
	mid =(high+low)/2;
		printf("%d  %d\n\n",low,high);
		if(arr[mid]==element){
			return mid;
		}else if(arr[mid]<element){
			low = mid+1;
		}else{
			high  = mid-1;
		}
	}
}



int main(){
	int arr[11] = {2,5,6,8,12,34,56,78,97,123,234};
	int size = sizeof(arr)/sizeof(int);
	int element = 97;
	
	int searching = binarysearch(arr,size,element);
	printf("The binary search is %d",searching);
	
	return 0;
}





















