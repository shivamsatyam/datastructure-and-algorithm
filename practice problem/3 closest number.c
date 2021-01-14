#include<stdio.h>

int main(){
	int n,m,d;
	printf("Enter n");
	scanf("%d",&n);
	
	printf("Enter m\n");
	scanf("%d",&m);
	
	d=  n%m;
	int news = n-d;
	printf("The minimun number is %d",news);
	return 0;
}

















