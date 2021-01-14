#include<stdio.h>
#include<stdlib.h>
struct myArray{
	int total_size; //memory to be reserved
	int used_size; // memory to be used
    int *ptr;
	

};

void createArray(struct myArray *a,int tsize,int usize){
	(*a).total_size = tsize;
	(*a).used_size = usize;
	(*a).ptr = (int *)malloc(tsize*sizeof(int));
	
	 
}

void show(struct myArray *a){
	int i;
	for(i=0;i<(*a).used_size;i++){
		printf("%d\n",((*a).ptr)[i]);
	}
}

void setVal(struct myArray *a){
	int i;
	int n;
	for(i=0;i<(*a).used_size;i++){
		printf("Enter the number in the array\n");
		scanf("%d",&n);  //((*a).ptr)[i]
		((*a).ptr)[i] = n;
		
	}
}

int main(){
	
	struct myArray marks; //struct myArray marks[1];
	createArray(&marks,10,2);	
	setVal(&marks);
	show(&marks);

	

	return 0;
}




















