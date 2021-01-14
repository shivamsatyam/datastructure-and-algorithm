#include<iostream>
using namespace std;


int main()
{
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int element;
		cin>>element;
		int rem = element%5;
		int next = (element-rem)+5;
		int diff = next-element;
//		cout<<next<<"\n";
		if(element<38){
			cout<<element<<"\n";
		}else{
			if(diff<3){
				cout<<next<<"\n";
			}else{
				cout<<element<<"\n";
			}
		}
	}
	
	return 0;
}


























