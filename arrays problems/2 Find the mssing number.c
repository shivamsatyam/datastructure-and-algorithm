#include<stdio.h>
#include<stdlib.h>

// method one using the formula the time complexity is O(n)
int getMissingNumber(int arr[], int n){
	int sum = ((n+1)*(n+2))/2;
	int i;
	for(i=0;i<n+1;i++){
		sum -=arr[i];
	}
	return sum;
}

int secondmethod(int arr[],int n){
	//gekksforgeeks video number second array
	int i;
	int x1 = arr[0];
	int x2 = 1;
	
	for(i=1;i<n;i++){
		x1 = x1^arr[i];
	}
	
	for(i=2;i<=n+1;i++){
		x2 = x2^i;
	}
	return (x1^x2);
	
}


int main(){
	int arr[] = {1,2,3,4,6};
	// in this list the number 5 is missing in the sorted array we have to find that number
	int n = sizeof(arr)/sizeof(arr[0]);
	int miss = secondmethod(arr,n);
	printf("The missing number is %d\n",miss);	
//	printf("%d",2^12);
}


























