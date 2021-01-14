#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int n,k,q;
	cin>>n>>k>>q;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int query[q];
	for(int i=0;i<q;i++){
		cin>>query[i];
	}
	
	for(int i=0;i<k;i++){
		int f=arr[n-1];
		for(int j=n-1;j>0;j--){
			arr[j]=arr[j-1];
		}
		arr[0] = f;
	
	}

	for(int i=0;i<n;i++){
		cout<<arr[query[i]]<<"\n";
	}
	
	return 0;
}


























