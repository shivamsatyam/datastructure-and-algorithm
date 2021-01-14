#include<stdio.h>


int count(int arr[],int size){
	int i,j;
	int count = 0;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(arr[j]>arr[j-1]){
				count = count+1;
			}
		}
	}
	
	printf("The number of subarrays is %d\n",count);
}



int main(){
	
	int arr[] = {1,2,3,4,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	count(arr,n);
	
	return 0;
	
}



























