#include<iostream>
#include<list>
using namespace std;


int main()
{

	int t;
	cin>>t;
	for(int v=0;v<t;v++){
		int n;
		cin>>n;
		int count=1;
		if(n==0){
			cout<<1<<"\n";
		}else if(n==1){
			cout<<2<<"\n";
		}else{
			for(int i=1;i<n+1;i++){
				if(i%2==0){
					count+=1;
				}else{
					count*=2;
				}
			}
			cout<<count<<"\n";
		}
	}



	return 0;
}


























