#include<iostream>
using namespace std;


int main()
{
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int max=0,count=0;
	for(int i=0;i<num;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	
	for(int i=0;i<num;i++){
		if(arr[i]==max){
			count++;
		}
	}
	
	cout<<count<<" ";
	return 0;
}


























