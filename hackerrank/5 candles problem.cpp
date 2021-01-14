#include<bits/stdc++.h>
using namespace std;

//bekar

int main(){
	int n;
	cin>>n;
	 int arr[n];
	int c=0;
	int s=0;
	
	
	int max=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]==max){
			c++;
		}
	}
	cout<<c<<"\n";


	return 0;
}
