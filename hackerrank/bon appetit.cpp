#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,k;
	cin>>n>>k;
	int sum = 0;
	for(int i=0;i<n;i++){
		int e;
		cin>>e;
		if(k!=i){
			sum+=e;	
		}
	}

	sum = sum/2;
	int b;
	cin>>b;
	if(b==sum){
		cout<<"Bon Appetit"<<"\n";
	}else{
		cout<<b-sum<<"\n";
	}
	return 0;
}


























