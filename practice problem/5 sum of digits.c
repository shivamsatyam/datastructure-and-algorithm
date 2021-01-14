#include<stdio.h>
#include<math.h>


int  digit(int n){
	int x = 0;
	while(n>0){
		x++;
		printf("%d  ",n);
		n = n/10;
	}
	return x;
}

int count(int n){
	int temp  = n;
	int a = temp%10;
	while(temp>0){
		temp=temp/10;
		a += temp%10;
	}
	return a;
}

int check(int a){
	int sum = count(a);
//	int size = ()	
}



int main(){

	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	
	printf("The result is %d ",count(n));
	int s = 456;
	
	
	return 0;
}

















