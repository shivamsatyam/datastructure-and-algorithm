#include<iostream>
using namespace std;


int main()
{
	int s,t;
	cin>>s>>t;
	int a,b;
	cin>>a>>b;
	int m,n;
	cin>>m>>n;
	int arrm[m];
	int arrn[n];
	for(int i=0;i<m;i++){
		cin>>arrm[i];
		arrm[i] = arrm[i]+a;
	}
	for(int i=0;i<n;i++){
		cin>>arrn[i];
		arrn[i] = arrn[i]+b;
	}
	int c1=0,c2=0;
	for(int i=0;i<m;i++){
		if(arrm[i]>=s && arrm[i]<=t){
			c1++;
		}
	}
	
	for(int i=0;i<n;i++){
		if(arrn[i]>=s && arrn[i]<=t){
			c2++;
		}
	}
	cout<<c1<<"\n"<<c2;
	
	return 0;
}




0 2 5 3





















