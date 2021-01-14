#include<stdio.h>
#include<math.h>




int main(){
	int a;
	int num=0;
	scanf("%d",&a);
	
	while(a>0){
		num = (num*10)+a%10;
		a = a/10;
	}
	printf("The reverse number is %d",num);
	
	return 0;
}









