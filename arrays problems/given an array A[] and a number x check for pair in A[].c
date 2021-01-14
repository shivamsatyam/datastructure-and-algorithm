#include<stdio.h>



void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionsort(int arr[],int n){
	int i,j,num;
	for(i=0;i<n-1;i++){
		num = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[num]){
				num = j;
			}
		}
		swap(&arr[num],&arr[i]);
	}
}

int check(int arr[],int n,int sum){
	int i,j;
	i = 0;
	j = n-1;
	while(i<j){
		if(arr[i]+arr[j]==sum){
			printf("The number are %d and %d",arr[i],arr[j]);
			break;
		}else if(arr[i]+arr[j]<sum){
			i++;
		}else{
			j--;
		}
	}
}


int main(){
	
	int arr[] = {1,4,45,6,10,-8};
	int size = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,size);
	check(arr,size,16);
	return 0;
}







































