#include<stdio.h>

int peak(int arr[],int size){
	int i,j;
	for(i=0;i<size-2;i++){
		j = i+1;
		if(arr[j]>=arr[j-1] && arr[j]>=arr[j+1]){
			printf("The peak element is %d\n",arr[j]);
//			break;
		}
	}
}

// not completed
int binary(int arr[],int n){
	int low,mid,high;
	high = n-1;
	low = 0;	
	
	while(high<=low){
		mid = (high+low)/2;
		if(mid==0 || (arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])){
			printf(" The peek element is %d\n",arr[mid]);
			break;
		}else if(arr[mid]<arr[mid-1]){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
}


int main(){
	
	int arr[] = {10,20,15,2,23,90,67};
	int n = sizeof(arr)/sizeof(arr[0]);
	binary(arr,n);
	return 0;
}



































