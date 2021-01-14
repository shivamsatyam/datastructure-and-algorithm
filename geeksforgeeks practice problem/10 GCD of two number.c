#include<stdio.h>
//10 4

int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}


int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("the gcd is %d",gcd(a,b));
	
}



















