#include<iostream>
#include<list>
using namespace std;


int main()
{
	int n,k;
	cin>>n>>k;
	int max=0;
	for(int i=0;i<n;i++){
		int e;
		cin>>e;
		if(e>max){
			max=e;
		}
	}
	
	if(k>=max){
		cout<<0<<"\n";
	}else if(k<max){
		cout<<max-k<<"\n";
	}
	
	
	return 0;
}


























