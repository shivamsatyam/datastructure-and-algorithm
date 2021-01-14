#include<iostream>
#include<list>
using namespace std;


int main()
{
	int n,k;
	cin>>n>>k;
	int count=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			int val1 = arr[i];
			int val2 = arr[j];
			if((i<j) &&(arr[i]+arr[j])%k==0){
				count++;
			
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}


























