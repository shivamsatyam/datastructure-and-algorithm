#include<stdio.h>
#include<stdlib.h>

int Union(int arr1[],int arr2[],int m ,int n){
	
	int i,j;
	i = 0;
	j = 0;
	while(i<m && j<n){
		if(arr1[i]<arr2[j]){
			printf("%d ",arr1[i]);
			i++;
		}else if(arr1[i]>arr2[j]){
			printf("%d ",arr2[j]);
			j++;
		}else{
			printf("%d ",arr1[i]);
			i++;
			j++;
		}
	}

	if(m>n){
		int a=i;
		while(a<m){
			printf("%d ",arr1[a]);
			a++;
		}
	}else{
		int b=j;
		while(b<n){
			printf("%d ",arr2[b]);
			b++;
		}
	}
}



int Intersection(int arr1[],int arr2[],int m,int n){
	int i,j;
	i = 0;
	j = 0;

	while(i<m && j<n){
		if(arr1[i]<arr2[j]){
//			printf("%d ",arr1[i]);
			i++;
		}else if(arr1[i]>arr2[j]){
//			printf("%d ",arr2[j]);
			j++;
		}else{
			printf("%d ",arr1[i]);
			i++;
			j++;
		}
	}
	
	
}


int main(){
	
	int arr1[] = {1,3,4,5,7};
	int arr2[] = {2,3,5,6};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	Intersection(arr1,arr2,m,n);
	
	return 0;
}
//
//#include<stdio.h>
//
//int XOR(int arr[],int n){
//	int i;
//	int x1 = arr[0];
//	int x2 = 1;
//	for(i=0;i<n;i++){
//		x1 = x1^arr[i];
//	}
//	for(i=2;i<=n+1;i++){
//		x2 = x2^i;
//	}
//	printf("The missing number is %d ",x1^x2);
//}
//
//
//int main(){
//	int arr[] = {1,2,4,5,6};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	XOR(arr,5);
//	return 0;
//}
//
//
//























































