#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int isok(int a,int k){
	int num=0;
	int b = a;
	while(a>0){
		num = num*10 + (a%10);
		a /=10;
	}
//	cout<<num<<" ";
	if((abs(b-num))%k==0){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
	
	
	int count = 0;
	int i,j,k;
	cin>>i>>j>>k;
	for(int a=i;a<j+1;a++){
		int val = isok(a,k);
		if(val==1){
			count++;
		}
	}
	
	cout<<count<<"\n";
	
	return 0;
	
	
}


























