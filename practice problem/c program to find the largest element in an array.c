#include<stdio.h>
#include<math.h>

int max(int array[],int n){
	int i;
	
	int max = 0;
	for(i=0;i<n;i++){
		if(array[i]>max){
			max = array[i];
		}
	}
	return max;
}

int main(){
	int arr[] = {3,434,54,53,46,45,45,43,4,325,42,65,4,6,6,36};
	
	printf("The largest number is %d",max(arr,16));
	
	return 0;
}



















