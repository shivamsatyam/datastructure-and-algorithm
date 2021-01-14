#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	
	if(y1==y2 && m1==m2 && d1>d2){
		cout<<(d1-d2)*15<<"\n";
	}else if(y1>y2){
		cout<<1000<<"\n";
	}else if(y1==y2 && d1==d2 && m1>m2){
		cout<<(m1-m2)*500<<"\n";
	}else if(y1==y2 && m1==m2 && d1==d2){
		cout<<0<<"\n";
	}else if(y1<y2){
		cout<<0<<"\n";
	}
	else{
		cout<<((y1-y2)*1000)+((m1-m2)*500)+((d1-d2)*15)<<"\n";
	}
	
	return 0;
}


























