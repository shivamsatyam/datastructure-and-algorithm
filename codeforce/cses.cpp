#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<1;
	}
	else if(n==2 || n==3){
		cout<<"NO SOLUTION";
	}else{
	
	
	for(int i=2;i<=n;i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cout<<i<<" ";
		}
	}
}
	return 0;
}























