#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	cout<<'c'=='c';
	string s,t;
	int k=0;
	cin>>s>>t>>k;
	int count = 0;
	int mini = min(s.size(),t.size());
	int maxi = max(s.size(),t.size());	
	
	for(int i=0;i<mini;i++){
		if(s.at(i)!=s.atq(i)){
			count++;
		}else{
			break;
		}
	}
	int ans = s.size()-count;
	ans = ans+(t.size()-count);
	cout<<"the value of ans is count"<<ans<<" "<<count<<"\n";
	if(ans<=k){
		cout<<"Yes"<<"\n";
	}else{
		cout<<"No"<<"\n";
	}

	return 0;
}


























