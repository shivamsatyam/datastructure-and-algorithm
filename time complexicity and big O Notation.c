#include<stdio.h>

float sum(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
int main(){
	float a,b;
	printf("Enter the first number");	
	scanf("%f",&a);
	
	printf("Enter the second number");	
	scanf("%f",&b);
	
	printf("The sum of %f and %f is %f\n",a,b,sum(a,b));
	printf("The subtract of %f and %f is %f\n",a,b,sub(a,b));
	printf("The multiplication of %f and %f is %f\n",a,b,mul(a,b));
	printf("The division of %f and %f is %f\n",a,b,div(a,b));
	
	return 0;
}

float sum(float a,float b){
	return a+b; 
}
float sub(float a,float b){
	return a-b; 
}

float mul(float a,float b){
	return a*b; 
}

float div(float a,float b){
	return a/b; 
}

















