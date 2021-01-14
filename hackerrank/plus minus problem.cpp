#include<iostream>
using namespace std;


int main()
{
	int num;
	cin>>num;
	int d;
	float a,b,c;
	
	for(int i=0;i<num;i++){
		cin>>d;
		if(d>0){
			a++;
		}else if(d<0){
			b++;
		}else if(d==0){
			c++;
		}
	}
	printf("%.5f\n",a/num);
	printf("%.5f\n",b/num);
	printf("%.5f\n",c/num);
	
	return 0;
}


























