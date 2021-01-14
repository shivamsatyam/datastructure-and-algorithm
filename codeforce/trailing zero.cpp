#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	ll ans;
	cin>>n;



	
	for(ll i=5;i<=n;i*=5){
		ans+=n/i;
	}

	cout<<ans;

	return 0;
}























