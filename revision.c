#include<stdio.h>
#include<stdlib.h>

struct Array{
	int top;
	int *arr;
	int size;
};

int isEmpty(struct Array *ptr){
	if(ptr->top==-1){
		return 1;
	}else{
		printf("stack underflow");
		return 0;
	}
}

int isFull(struct Array *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}else{
		printf("stack overflow");
		return 0;
	}
}

void show(struct Array *ptr){
	for(int i=0;i<ptr->top+1;i++){
		printf("%d ",ptr->arr[i]);
	}
	printf("\n");
}

void push(struct Array *ptr,int data){
	if(!isFull(ptr)){
		ptr->top++;
		ptr->arr[ptr->top] = data;

	}

}

void pop(struct Array *ptr){
	if(!isEmpty(ptr)){
		ptr->top--;
	}
}

void peek(struct Array *ptr,int index){
	if(!isEmpty(ptr)){
		printf("the value is %d\n",ptr->arr[index-1]);
	}
}

int main(){
	struct Array *head = (struct Array *)malloc(sizeof(struct Array));
	head->top = -1;
	head->size = 10;
	head->arr = (int *)malloc(head->size*sizeof(int));
	push(head,12);
	push(head,22);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);
	push(head,32);

	show(head);
	return 0;
}






























