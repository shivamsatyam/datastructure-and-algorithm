#include<stdio.h>
#include<stdlib.h>

int odd(int arr[],int n){
	
	int i,j;
	int count = 0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[j-1]){
				count = count+1;
			}else{
				break;
			}
		}
	}
	printf(" %d ",count);
	
	
	
}

int another(int arr[],int n){
	int i,j,len;
	int cnt;
	len = 1;
	for(i=0;i<n-1;i++){
		if(arr[i]<arr[i+1]){
			len++;
			printf("first if condition run \n");
		}else{
			printf("else condition run \n");
			cnt += (len*(len-1))/2;
			len = 1;
		}
	}
	if(len>1){
		printf("the second if condition run\n");
		cnt += ((len-1)*len)/2;
	}
	
	printf(" %d ",cnt);
}

int main(){
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	another(arr,n);
	
	return 0;
}
































