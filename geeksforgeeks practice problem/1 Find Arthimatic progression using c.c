#include<stdio.h>



int main(){
	int a,b,n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);

	int d = b-a;
//	a+(n-1)*d
	int result = (a+(n-1))*d;
	printf("the term at the %d index is %d",n,result);
	
	return 0;
}
























