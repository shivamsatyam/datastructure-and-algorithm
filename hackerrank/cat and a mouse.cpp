#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int p,q,r;
		cin>>p>>q>>r;
		if(abs(p-r)==abs(q-r)){
			cout<<"Mouse C"<<"\n";
		}else{
			if(abs(p-r)<abs(q-r)){
				cout<<"Cat A"<<"\n";
			}else{
				cout<<"Cat B"<<"\n";
			}
		}
	}
	return 0;
}


























