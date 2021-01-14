//error 

#include<stdio.h>
#define limit 100


int printMissing(int arr[],int n){
	bool seen[limit] = {false};
	int i;
	for(i=0;i<limit;i++){
		if(arr[i]<limit){
			seen[arr[i]] = true;
		}
	}
	int a = 0;
	while(a<limit){
		if(seen[a]==false){
			int j = a+1;
			while(j<limit && seen[j]=false){
				j++;
			}
			if(i+1=j){
				printf("%d\n",i);
			}else{
				printf("%d - %d\n",i,j-1);
				i = j;
			}
		}
	}else{
		a++;
	}
	
}



int main(){
	
	
	int arr[] = {88,105,3,2,200,0,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printMissing(arr,n);
	
	return 0;
}



























