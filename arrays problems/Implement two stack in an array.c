#include<stdio.h>
#include<stdlib.h>

struct Node{
	int top1,top2;
	int *arr;
	int size;
};


int push1(struct Node *ptr,int data){
	
	if((ptr->top1+1)<ptr->top2){
		ptr->top1++;
		ptr->arr[ptr->top1] = data;
	}else{
		printf("Stack overflow\n");
	}
		
}



int push2(struct Node *ptr,int data){
	
	if((ptr->top1+1)<ptr->top2){
		ptr->top2++;
		ptr->arr[ptr->top2] = data;
	}else{
		printf("Stack overflow\n");
	}
		
}

int pop1(struct Node *ptr){
	if(ptr->top1!=-1){
		printf("Stack underflow\n");
	}else{
		ptr->top1--;
	}
}


int pop2(struct Node *ptr){
	if(ptr->top2!=ptr->size){
		printf("Stack underflow\n");
	}else{
		ptr->top2--;
	}
}

int main(){
	
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->size = 10;
	head->top1 = -1;
	head->top2 = head->size;
	head->arr = (int *)malloc(head->size*sizeof(int));
	
	push1(head,23);	
	push1(head,23);	
	push1(head,23);	
	push1(head,23);	
	push1(head,23);	
	push1(head,23);	
	push1(head,23);	
	
	return 0;
}



















































