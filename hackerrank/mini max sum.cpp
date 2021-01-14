#include<iostream>
#include<list>
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
	0 2 5 3
	
}
int main()
{
	int arr[5];	
	for(int a=0;a<5;a++){
		cin>>arr[a];
	}
	bubblesort(arr,5);
	
	long long int sum=0;
	for(int i=0;i<5;i++){
		sum = sum+arr[i];
	}
	
	cout<<sum-arr[4]<<" "<<sum-arr[0]<<"\n";
	return 0;
}


























