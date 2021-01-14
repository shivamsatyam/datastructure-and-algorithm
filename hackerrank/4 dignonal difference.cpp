#include<iostream>
#include<cstdlib>

using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[n][n];
	
	int lr=0,rt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			if(i==j){
				lr = lr+arr[i][i];
			}if(i==n-j-1){
				rt = rt+arr[i][j];
			}
		}
	}
	
	cout<<abs(lr-rt)<<"\n";
	
	return 0;
}
