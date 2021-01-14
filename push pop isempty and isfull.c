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

int pop(struct stack *ptr){
	int val = ptr->arr[ptr->top];
	ptr->top--;
	return val;	
	
}

int isEmpty(struct stack *ptr){
	if(ptr->top==-1){
		printf("\nThe stack is empty\n");
		return 1;
	}else{
		printf("The stack is not empty");
		return 0;
	}	
}

int isFull(struct stack *ptr){
	if(ptr->top = (ptr->size)-1){
		printf("\n The stack is now full \n");
		printf("%d\n",ptr->top);
		printf("%d\n",ptr->size);
		return 1;
	}else{
		printf("The stack is not full");
		
		return 0;
	}
}

int push(struct stack *ptr,int data){

	ptr->top++;
	ptr->arr[ptr->top] = data;
		
	
}



int main(){
	struct stack *head = (struct stack*)malloc(sizeof(struct stack));
	head->size = 10;
	head->top = -1;
	head->arr = (int *)malloc(head->size*sizeof(int));
	
	printf("65\n");
	
	transverse(head);
	push(head,45);
	push(head,145);
	push(head,245);
	push(head,345);
	
	transverse(head);
	isFull(head);
	
	pop(head);
	pop(head);
	pop(head);
	
	transverse(head);
	
	
	return 0;
}

















