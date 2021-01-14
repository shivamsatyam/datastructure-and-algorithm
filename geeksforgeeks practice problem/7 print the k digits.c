#include<stdio.h>
#include<math.h>



void result(int a,int n){
	int i;
	int num=0;
	for(i=0;i<n;i++){
		num = a%10;
		a = a/10;
	}
	printf("The digit is %d",num);
}



int main(){
	int a,b,n;
	scanf("%d",&a);	
	scanf("%d",&b);	
	scanf("%d",&n);
	
	int pows = pow(a,b);
	result(pows,n);
	
	return 0;
}






















