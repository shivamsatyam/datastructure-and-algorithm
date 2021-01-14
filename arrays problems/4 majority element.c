// more voting alogoritm
#include<stdio.h>
#include<stdlib.h>

int majority(int arr[],int n){
	int me,i,count;
	me = 0;
	count = 1;
	for(i=1;i<n;i++){
		if(arr[me]==arr[i]){
			count++;
		}else{
			count--;
		}
		if(count==0){
			me = i;
			count = 1;
		}
	}

printf("The majority element is %d %d",arr[me],count);
}


int main(){
	
	
	int arr[] = {4,3,4,2,3,4,2,2,4};
	int n =sizeof(arr)/sizeof(arr[0]); 
	majority(arr,n);
	
	return 0;
}

















