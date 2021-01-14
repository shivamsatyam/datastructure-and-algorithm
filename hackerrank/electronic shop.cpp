#include<iostream>
#include<list>
using namespace std;


int main()
{
	
	int b,n,m;
	cin>>b>>n>>m;
	int k[n];
	int u[m];
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	
	for(int i=0;i<m;i++){
		cin>>u[i];
	}
	
	int count=0;
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if((k[i]+u[j])<=b){
				if((k[i]+u[j])>max){
					max = k[i]+u[j];
				}
			}
		}
	}
	if(max==0){
		cout<<"-1"<<"\n";
	}else{
		cout<<max<<"\n";
	}
	
	return 0;
}


























