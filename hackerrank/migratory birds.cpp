#include<iostream>
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
//		printf("working on element");
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
	int array[arr[n-1]];
	
	for(int i=0;i<n-1;i++){
		int count = 0;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cout<<"if run\n";
				count++;
			}else{
				array[i] = count;
				i = j;
				cout<<"else run\n";
				
			}
		}
	}
	for(int i = 0;i<arr[n-1];i++){
		cout<<array[i]<<" ";
	}	
	return 0;
}


























