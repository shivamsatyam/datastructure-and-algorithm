#include<stdio.h>

int main(){
	int a1,a2,n;
	printf("Enter thw first");
	scanf("%d",&a1);
	
	printf("Enter thw second");
	scanf("%d",&a2);
	
	printf("Enter thw third");
	scanf("%d",&n);
	  
	int d = a2-a1;
	printf("%d",d);
	printf("\n");

	int i=0;
	while(i!=n){
		printf("%d  ",a1);
		a1  = a1+d;
		i++;
	}		
	return 0;
}

















