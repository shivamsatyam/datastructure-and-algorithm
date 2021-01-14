#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	int X[] = {x1,v1};
	int Y[] = {x2,v2};
	
	int back[2];
	int fwd[2];
	if(x1>x2){
		fwd[0] = x1;
		fwd[1] = v1;
		back[0] = x2;
		back[1] = v2;	
	}else{
		fwd[0] = x2;
		fwd[1] = v2;
		back[0] = x1;
		back[1] = v1;
	}
	
	int dist = fwd[0] - back[0];
	while(back[0]<fwd[0]){
		back[0]+=back[1];
		fwd[0]+=fwd[1];
		
		if(fwd[0]-back[0]>=dist){
			break;
		}
	}
	
	if(back[0]==fwd[0]){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
	}
	
	return 0;
}

3 6
9 8
12 10

























