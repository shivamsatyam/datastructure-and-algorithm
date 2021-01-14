#include<stdio.h>
#include<math.h>

int  digit(int n){
//	printf("%d",n);
	int x = 0;
	while(n>0){
		x++;
		printf("%d  ",n);
		n = n/10;
	}
	return x;
}

int  check(int num){
	int temp = num;
	int count = digit(temp);
	int sum;
	while(temp>0){
		int r = temp%10;
		sum = sum + pow(r,count);
		temp = temp>10;
	}
	printf("      %d      ",sum);
	return (sum==num);	
}

int main(){
	int n;
	printf("Enter n");
	scanf("%d",&n);
	
	printf("The value given by the check function is %d",check(n));
	return 0;
}

















