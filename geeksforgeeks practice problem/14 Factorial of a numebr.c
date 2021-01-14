#include<stdio.h>
#include<math.h>

int fac(int a){
	if(a==0){
		printf("Invalid");
		return 0;
	}else{
		int i;
		int sum;
		for(i=1;i<=a;i++){
			sum = sum*i;
		}
		return sum;
	}
	
}


int main(){
	int a;
	scanf("%d",&a);
	int ans = fac(a);
	printf("The answr is %d",ans);
	return 0;
}





















