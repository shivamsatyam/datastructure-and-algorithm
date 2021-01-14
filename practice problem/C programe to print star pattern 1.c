#include<stdio.h>
#include<math.h>


int main(){
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}











