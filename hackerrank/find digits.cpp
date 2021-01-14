#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void check(long long int a){
	int rem;
	int num=a;
	int count = 0;
	while(a){
		rem = a%10;
		if(rem!=0){
			if(num%rem==0){
				count++;
			}
		}
		a = a/10;
	}
	cout<<count<<"\n";
}

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int a;
		cin>>a;
		check(a);
	}
	
	return 0;
}


























