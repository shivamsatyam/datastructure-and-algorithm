#include<stdio.h>

void swap(int *a,int *b){
	int tem = *a;
	*a = *b;
	*b = tem;
}

void count(int arr[],int n){
	int i;
	int c1=0,c2=0;
	for(i=0;i<n;i++){
		if(arr[i]==0){
			c1 = c1+1;
		}else{
			c2 = c2+1;
		}
	}
	
	for(i=0;i<c1;i++){
		arr[i] = 0;
	}
	for(i=c1;i<c1+c2;i++){
		arr[i] = 1;
	}
}

void segretate(int arr[],int size){
	int left = 0, right = size-1;
	while(left<right){
		while(arr[left]==0 && left<right){
			left++;
		}
		
		while(arr[right]==1 && left<right){
			right--;
		}
		if(left<right){
			arr[left] = 0;
			arr[right] = 1;
			left++;
			right--;
		}
	}
}
void show(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(){
	
	int arr[] = {0,1,0,1,0,0,1,1,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	show(arr,n);
	segretate(arr,n);
	show(arr,n);
	count(arr,n);
	show(arr,n);
	
	
	return 0;
	
}



























