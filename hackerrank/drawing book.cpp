#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n,p,b;
	cin>>n>>p;
	int f = p/2;
	if(n%2==0){
		b = (n-p+1)/2;
	}else{
		b = (n-p)/2;
	}
	
	cout<<min(f,b)<<"\n";
	return 0;
}


























