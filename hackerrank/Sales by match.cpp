#include<iostream>
#include<list>
using namespace std;


int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int res=0;
	for(int i=0;i<n;i++){
		res+=arr[i]/2;
	}

	cout<<res<<"\n";
	return 0;
}


























