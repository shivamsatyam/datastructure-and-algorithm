#include<iostream>
#include<algorithm>
using namespace std;


void swap(int *a, int *b){
	int tem = *a;
	*a = *b;
	*b = tem;
}


void bubblesort(int arr[],int n){
	int i,j,temp;
	int sorted=0;
	for(i=0;i<n-1;i++){
		
		sorted=1;
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				sorted=0;
			}
			
		}
		if(sorted){
			return;
		}
	}
	
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bubblesort(arr,n);
	int max=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(arr[j]-arr[i])<=1){
				if(max<(j-i+1)){
					max = (j-i)+1;
				}	
			}
		}
	}
	
	cout<<max<<"\n";
	return 0;
	
}


























