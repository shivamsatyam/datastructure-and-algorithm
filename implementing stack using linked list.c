#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void show(struct Node *ptr){
	while(ptr!=NULL){
		printf("The data is %d\n",ptr->data);
	ptr = ptr->next;	
	}
	printf("\n");
	
}

int isFull(struct Node *head){
	struct Node *p = (struct Node *)malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(struct Node *head){
	if(head==NULL){
		return 1;
	}else{
		return 0;
	}
}

int peek(struct Node *ptr,int index){
	struct Node *p = ptr;
	int i;
	for(i=0;(i<index-1) && (p!=NULL);i++){
		p = p->next;
	}
	if(p!=NULL){
		int a =  p->data; 
		return a;
	}
	
}

struct Node *push(struct Node*head,int ins){
	if(isFull(head)){
		printf("Stack overflow\n");
	}else{
		struct Node *n = (struct Node *)malloc(sizeof(struct Node));
		n->data = ins;
		printf("The push methos run\n");
		n->next = head;
		head = n;
		return head;
	}

}

int pop(struct Node **ptr){
	if(isEmpty(*ptr)){
		printf("stack underflow\n");
	}else{
		struct Node *p = *ptr;
		int value = (*ptr)->data;
		*ptr = (*ptr)->next;
		free(p);
		return value;
	}
}

int main(){
	struct Node *head = NULL;
	show(head);
	head = push(head,54);
	head = push(head,154);
	head = push(head,254);
	head = push(head,354);
	int element = pop(&head); 
	printf("%d\n",element);
	show(head);
	
	printf("\n\n the data is %d",peek(head,3));
	return 0;
}































