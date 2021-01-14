#include<iostream>
using namespace std;



int main(){
	int a;
	long long b,sum;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		sum+=b;
	}
	cout<<sum;
	return 0;
}
