#include<stdio.h>




int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	
	int rem = n%m;
	if(rem>0){
	printf("The closest number is %d",n-rem);
	}else{
	printf("The closest number is %d",n+rem);
		
	}
	return 0;
}



















