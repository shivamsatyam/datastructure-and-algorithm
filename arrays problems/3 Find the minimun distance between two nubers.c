#include<stdio.h>


int distance(int arr[],int n,int x,int y){
	int i,j;
	int max = 0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((arr[i]==x || arr[i]==y) || (arr[i]==y || arr[i]==x) ){
				if(max==0){
					j = max;
				}else if(max>j){
					max==j;
				}
				printf("break statement executed %d \n\n",max);
				break;
			}
			
		}
	}
	printf("the max is %d",max);
}




int main(){
	
	int arr[] = {3,5,4,2,6,5,6,6,5,4,8,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int x = 3;
	int y = 6;
	distance(arr,n,x,y);
	
	
	return 0;
}










































