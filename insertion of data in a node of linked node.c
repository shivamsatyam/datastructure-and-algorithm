/*
insert at the beginning
insert at between
insert at the end
insert after a note

*/

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

struct Node *Atfirst(struct Node *head,int data){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	return ptr;
}

struct Node *Atbetween(struct Node *head,int index,int data){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node *p = head;
	int i;
	while(i!=index-1){
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next= p->next;
	p->next = ptr;
	return head;
}

struct Node *Atend(struct Node *head,int data){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node *p = head;
	ptr->data = data;
	while(p->next!=NULL){
		p= p->next;
	}

	p->next = ptr;
	ptr->next = NULL;
	
	return head;
}

struct Node *nodeinsert(struct Node *head,struct Node *prev, int data){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->next = prev->next;
	prev->next = ptr;
	return head;
}

int main(){
	
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 545;
	second->next = third;
	
	third->data = 6435;
	third->next = NULL;
	
	show(head);
//	head = Atfirst(head,56);
//	show(head);
//	
//	head = Atbetween(head,1,565);
//	show(head);

//	head = Atend(head,67);
//	show(head);
	head = nodeinsert(head,second,45);
	show(head);
	
	
	return 0;
}



































