#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	long long int ans=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int y=1;y<n;y++){
		if(arr[y]<arr[y-1]){
			ans = ans+arr[y-1]-arr[y];
			arr[y] =arr[y-1];
		}
	}
	cout<<ans;
}



















