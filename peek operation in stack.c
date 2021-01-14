#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

int transverse(struct stack *ptr){
	int i;
	for(i=0;i<ptr->top+1;i++){
		printf("the data is %d\n",ptr->arr[i]);
	}
}




int push(struct stack *ptr,int data){
	ptr->top++;
	ptr->arr[ptr->top] = data;
}

int peek(struct stack *ptr,int pos){
	int value = ptr->top;
	ptr->top = pos;
	int data = ptr->arr[ptr->top];
	printf("\nthe data at the %d index is %d\n",ptr->top,data);
	ptr->top = value;
}

int harrypeek(struct stack *ptr,int i){
	int arry = ptr->top-i+1;
	if(ptr->top-i+1<0){
		printf("Not a vaid position for the stack");
		return -1;
	}else{
		return ptr->arr[arry];
	}
}


int main(){
	struct stack *head = (struct stack*)malloc(sizeof(struct stack));
	head->size = 100;
	head->top = -1;
	head->arr = (int *)malloc(head->size*sizeof(int));
	
	printf("65\n");
	printf("%d\n",head->top);
	
	transverse(head);
	push(head,12);
	push(head,112);
	push(head,212);
	push(head,312);
//	peek(head,0);
//	peek(head,1);
//	peek(head,2);
//	peek(head,3);
//	peek(head,4);
//	
	push(head,412);
	
	
	
	
//	transverse(head);
	
	printf("\n\n\n");
	int i;
	for(i=0;i<head->top;i++){
	
	printf("the value at index %d is %d\n",i,peek(head,i));
}
	return 0;
}


