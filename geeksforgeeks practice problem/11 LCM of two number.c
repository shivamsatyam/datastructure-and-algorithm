#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	int ans = gcd(a,b);
	printf("The LCM is %d",(a*b)/ans);
	
	return 0;
}

























