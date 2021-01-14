#include<stdio.h>
#include<math.h>

int gcd(int a, int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}

int small(int *a,int *b){
	int g = gcd(*a,*b);
	*a = *a/g;
	*b = *b/g;
	printf("The fraction is %d / %d",*a,*b);
}

int divide(int lcm,int num1,int num2,int den1,int den2){
	int a1 = num1*(lcm/den1);
	int a2 = num2*(lcm/den2);
	int upper = a1+a2;
	int lower = lcm;
	small(&upper,&lower);
}


int main(){
    
	int num1,den1,num2,den2;
	scanf("%d%d",&num1,&den1);
	scanf("%d%d",&num2,&den2);
	int lcm = (den1*den2)/gcd(den1,den2);	
	divide(lcm,num1,num2,den1,den2);
	
	
	
}
















