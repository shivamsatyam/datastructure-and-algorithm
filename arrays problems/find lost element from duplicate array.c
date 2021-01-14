#include<stdio.h>



int missing(int arr1[],int arr2[],int n){
	if(n==1){
//		{1,4,5,7,9}
//{1,4,7,9}
		return arr1[0];
	}
	if(arr1[0]!=arr2[0]){
		return arr1[0];
	}
	int low=0,high=n-1;
	int mid;
	while(high>low){
		mid  = (low+high)/2;
		printf("the mid is %d and the mid is %d\n\n\n",arr1[mid],arr2[mid]);
		if(arr1[mid]==arr2[mid]){
			printf("The low is %d and the mid is %d\n\n\n",arr2[mid],arr1[mid]);
			low = mid;
		}else{
			high=mid;
			printf("%d %d\n\n",arr1[mid],arr2[mid]);
		}
		if(low==high-1){
			break;
		}
		
		
	}
	return arr1[high];
}


int check(int arr1[],int arr2[],int m,int n){
	if(m>n){
		printf("the missing number is %d",missing(arr1,arr2,m));
	
	}else{
		printf("the missing number is %d",missing(arr2,arr1,n));
		
	}
}


int main(){
	
	int arr1[] = {1,4,5,7,9};
	int arr2[] = {1,4,7,9};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	check(arr1,arr2,m,n);
}






















