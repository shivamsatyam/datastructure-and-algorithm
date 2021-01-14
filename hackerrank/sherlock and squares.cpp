#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		cout<<(floor(sqrt(b))-ceil(sqrt(a))+1)<<"\n";
	}
	
	return 0;
}


























