#include<stdio.h>
#include<math.h>


int main(){
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int rem =0,rev=0;
	while(n!=0){
		rev = n%10;
		rem = (rem*10)+rev;

		n = n/10;
	}
	
	
	printf(" the result is %d\n",rem);
	
	return 0;
}











