#include<stdio.h>
#include<math.h>


int main(){
	
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	int rem=0;
	int arr[10];
	int i=0;
	static int a = 0;
	while(n!=0){
		rem = n%2;
		n = n/2;
		arr[i] = rem;
		i++;
		a++;
	}
	int j;
	for(j=a-1;j>=0;j--){
		printf("%d",arr[j]);
	}
	
	return 0;
}











