#include<stdio.h>
#include<math.h>

int sum(int n){
	int sum = 0;
	while(n>0){
		sum = sum+(n%10);
		n = n/10;
	}
	return sum;
}

int palidrome(int n){
	int num = 0;
	int a = n;
	while(n>0){
		num = num*10+(n%10);
		n = n/10;
	}
	if(a==num){
		printf("The number is plaidrome");
	}else{
		printf("The number is not polideomw");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int ans = sum(n);
	palidrome(ans);
	
	return 0;
}






















