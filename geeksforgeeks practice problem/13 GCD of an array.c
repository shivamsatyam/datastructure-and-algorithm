#include<stdio.h>
#include<math.h>


int gcd(a,b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}




int main(){
	
	int arr[4] = {6,12,4,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i,j;
	int g = 0;
	for(i=0;i<n-1;i++){
		if(n==0||n==1){
			return 0;
		}
		j = i+1;
		g = gcd(arr[i],arr[j]);
	}
	
	printf("The greatest Common divisor is %d",g);
	
	return 0;
}


























