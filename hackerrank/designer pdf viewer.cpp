#include<iostream>
#include<string>
using namespace std;


int main()
{

	int arr[26];
	string s;
	
	for(int i=0;i<26;i++){
		cin>>arr[i];
	}
	cin>>s;
	
	int max=0;
	for(int i=0;i<s.size();i++){
		int a = int(s.at(i));
		int v = a-97;
		if(arr[v]>max){
			max = arr[v];
		}
	}
	cout<<max*s.size()<<"\n";
	
	return 0;
}


























