#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(string &str){
	int n = str.length();
	for(int i=0;i<n/2;i++){
		swap(str[i],str[n-i-1]);
	}
}
int main()
{

	string s;
	cin>>s;
	cout<<int(s)<<"\n";
	return 0;
}
























