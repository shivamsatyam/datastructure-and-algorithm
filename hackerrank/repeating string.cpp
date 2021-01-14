#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	int cv=0;
	string sn;
	int size = s.size();
	int count=0;
	if(s.size()<2 && s.at(0)=='a'){
		cout<<n<<"\n";
	
	}else{
		
		for(int i=0;i<n;i++){
			sn = sn.append(s);
			cout<<"append runs"<<" "<<sn<<"\n";								
		}		
	}
	

	
//	cout<<s<<"\n";
	
	return 0;
}


























