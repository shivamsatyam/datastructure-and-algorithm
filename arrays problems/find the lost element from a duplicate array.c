#include<stdio.h>

int find(int arr1[],int arr2[],int n){
	if(n==1){
		printf(" %d ",arr1[0]);
	}
	else if(arr1[0]!=arr2[0]){
		printf(" %d ",arr1[0]);
	}else{
		int low,mid,high;
		low = 0;
		high = n-1;
		while(low<high){
			mid = (high+low)/2;
			if(arr1[mid]==arr2[mid]){
				low = mid;
			}else{
				high  = mid;
			}
			if(low==high-1){
				break;
			}
		}
		printf(" %d ",arr1[high]);
	}
}

int lostElement(int arr1[],int arr2[],int m ,int n){
	if(n==m-1){
		return find(arr1,arr2,m);
	}else if(m==n-1){
		return find(arr1,arr2,n);
	}else{
		printf("Invalid input");
	}
}


int main(){
	
	int arr1[] = {4,5,7,9,1};
	int arr2[] = {4,5,7,9};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	
	lostElement(arr1,arr2,m,n);

	return 0;
}










































