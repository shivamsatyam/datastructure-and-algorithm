#include<stdio.h>
#include<math.h>

int total(int num){
	int i;
	while(num>0){
		i++;
		num = num/10;
	}
	return i;
}

int armstrong(int num){
	int size = total(num);
	
	int a = num;
	int sum=0;
	int n=0;
	while(num>0){
		n = num%10;
		sum = sum+(pow(n,size));
		num = num/10;
	}
	
	if(a==sum){
		printf("The number is armstrong");
	}else{
		printf("The number is not armstrong");
	}
}

int main(){
	int a;
	scanf("%d",&a);
	armstrong(a);
	return 0;
}



















