#include<iostream>
#include<alogrithm>
using namespace std;


int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	
	int min = min(arr1);
	
	int i=0,j=0;
	while(i<=n && j<=m){
		
		i++;
		j++;
	}
	
	
	return 0;
}


























