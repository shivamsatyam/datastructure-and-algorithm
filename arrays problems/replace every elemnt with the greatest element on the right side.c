#include<stdio.h>

{16,17,4,3,5,2}

int replace(int arr[],int size){
	int i,j;
	j = arr[size-1];
	arr[size-1]=-1;
	for(i=size-2;i>=0;i--){
		int temp = arr[i];
		arr[i] = j;
		if(j<temp){
			j = temp;
	}
	}
}
void  show(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Element: %d\n",arr[i]);
	}
	printf("\n\n");
}

int main(){
//	printf("%d\n\n",abs(-4));
	int arr[] = {16,17,4,3,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	show(arr,n);
	replace(arr,n);
	show(arr,n);
	return 0;
}































