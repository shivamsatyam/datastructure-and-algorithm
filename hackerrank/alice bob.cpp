#include<iostream>
using namespace std;


int main()
{
	int a=0,b=0;
	int arr1[3];
	int arr2[3];
	
	for(int i=0;i<3;i++){
		cin>>arr1[i];
	
	}
	
	for(int i=0;i<3;i++){
		cin>>arr2[i];
	}
	
	
	for(int i=0;i<3;i++){
		if(arr1[i]>arr2[i]){
			a++;
		}else if(arr1[i]<arr2[i]){
			b++;
		}else{
			
		}
	}
	cout<<a<<" "<<b;
	return 0;
}


























