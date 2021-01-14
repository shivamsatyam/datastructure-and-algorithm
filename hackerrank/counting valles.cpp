#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sea = 0;
	int count=0;
	for(int i=0;i<n;i++){
		if(s.at(i)=='U'){
			++sea;
			
		}else{
			--sea;
			
		}
		if(sea==0){
			++count;
		}
	}
	
	cout<<count<<"\n";
	return 0;
}


























