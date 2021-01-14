#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int minimum=arr[0],maximum = arr[0];
	int min=0,max=0;
	
	for(int i=1;i<n;i++){
		if(arr[i]>maximum){
			maximum = arr[i];
		
			max++;
		}
		if(arr[i]<minimum){
			minimum = arr[i];
		
			min++;
		}
	}
	cout<<max<<" "<<min<<"\n";
	
	return 0;
}


























