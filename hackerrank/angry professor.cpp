#include<iostream>
#include<list>
using namespace std;


int main()
{

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		int count=0;
		cin>>n>>k;
		for(int j=0;j<n;j++){
			int element;
			cin>>element;
			if(element<=0){
				count++;
			}
		}
		
	
		if(count>=k){
			cout<<"NO"<<"\n";
		}else{
			cout<<"YES"<<"\n";
		}
	}
	return 0;
}


























