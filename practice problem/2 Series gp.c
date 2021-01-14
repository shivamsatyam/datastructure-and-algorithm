#include<stdio.h>

int main(){
	int a1,a2,n;
	printf("Enter thw first");
	scanf("%d",&a1);
	
	printf("Enter thw second");
	scanf("%d",&a2);
	
	printf("Enter thw third");
	scanf("%d",&n);
	  
	int b = a1;  
	int d = a2/a1;
	int i = 1;
	while(i!=n){
		
		b = b*d;
		i++;
	}
	
	printf("The term at the index  is %d ",b);

	return 0;
}

















