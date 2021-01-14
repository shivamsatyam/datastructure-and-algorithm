//not competed

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//2 3 = 8
int main(){
	int t;
	cin>>t;
	while(t>0){
		int x,y;
		cin>>y>>x;
		int z = max(x,y);
		ll ap = (z*(z+1)/2)+1;
//		cout<<z<<"  "<<ap;

		ll ans=0;
		if(z%2==0){
			if(y==x){
				ans = ap+x;
			}else{
				ans = ap+2*z-y;
			}	
		
		}else{
			ans = ap+2*z-x;
		}
		cout<<ans<<"\n";	
		t--;
	}



	return 0;
}























