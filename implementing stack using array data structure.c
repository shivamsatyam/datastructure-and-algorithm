#include<stdio.h>
#include<stdlib.h>

struct Node{
	int size;
	int top;
	int *arr;
		
};

void transverse(struct Node *ptr){
	int top = ptr->top + 1;
	int i;
	for(i=0;i<top;i++){
		printf("The %d element is %d",i,ptr->arr[i]);
	}
}
int  isFull(struct Node *ptr){
	int top = ptr->top;
	int size = ptr->size;
	if(top==size-1){
//		printf("The stack is now full");
		return 1;
	}else{
		return 0;
	}
}

int  isEmpty(struct Node *ptr){
	int top = ptr->top;
	int size = ptr->size;
	if(top==-1){
		return 1;
	}else{
		return 0;
	}
	
}

void push(struct Node *ptr,int data){
	ptr->top++;
	ptr->arr[ptr->top] = data;
}

int  pop(struct Node *ptr){
	int value = ptr->arr[ptr->top];
	ptr->top--;
	return value;		
}

int peek(struct Node *ptr,int index){
	int value = ptr->arr[index-1];
	return value;
}

int stackBottom(struct Node *ptr){
	int value = ptr->arr[0];
	return value;
}

int stackTop(struct Node *ptr){
	int value = ptr->arr[ptr->top];
	return value;
}
int main(){
	struct Node *head;
	head = (struct Node *)malloc(sizeof(struct Node));
	head->size = 10;
	head->top = -1;
	head->arr = (int *)malloc(head->size*sizeof(int));
	printf("%u\n",head);
	printf("%u\n",head->arr);
//	printf("%d\n",isFull(head));
//	printf("%d\n",isEmpty(head));
//	
//	printf("%d\n",isFull(head));
//	printf("%d\n",isEmpty(head));
	
	push(head,34);	
	push(head,134);	
	push(head,234);	
	push(head,334);	
	push(head,434);	
	printf("The data is %d",peek(head,3));
	
	int i;
	return 0;
}




















































