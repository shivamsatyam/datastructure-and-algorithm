#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,k;
	cin>>n>>k;
	int cloud = 0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i%k==0){
			cloud = cloud+arr[i];
		}
	}
	
	cout<<e-1<<"\n";
	
	
	return 0;
}


























