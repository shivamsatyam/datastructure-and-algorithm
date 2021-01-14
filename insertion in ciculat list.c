#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
//	struct Node *prev;
	struct Node *next;
};

void transverse(struct Node *head){
	struct Node *ptr = head;
	do{
		printf("the data is %d\n",ptr->data);
		ptr = ptr->next;	
	}while(ptr!=head);
	printf("\n");
}
struct Node *insertAtfirst(struct Node  *head,int dat){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = dat;
	struct Node *p = head->next;
	while(p->next!=head){
		p = p->next;
	}
//	printf("the data of ps is %d",p->data);
	p->next = ptr;
	ptr->next = head;
	return ptr;
}

struct Node *InsertInBetween(struct Node *head,int dat,int index){
	struct Node *p = head;
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = dat;
	int i=0;
	while(i!=(index-2)){
		i++;
		p = p->next;
		
	}
//	printf("The data is %d",p->data);
	ptr->next = p->next;
	p->next = ptr;
	
	return head;	
}

struct Node *AtEnd(struct Node *head,int dat){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node *p = head;
	ptr->data = dat;
	do{
		printf("the data is %d\n",p->data);
		p = p->next;	
	}while(p->next!=head);
	printf("\n");
	printf("the answer is %d",p->data);

	ptr->next = p->next;
	p->next = ptr;
	
	return head;
}
struct Node *InsertAtNode(struct Node *head,struct Node *node,int dat){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data  = dat;
	ptr->next = node->next;
	node->next = ptr;
	
	return head;
}

int main(){
	
	struct Node *head;
	struct Node *first;
	struct Node *second;
	struct Node *third;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 4;
	head->next = first;
	
	first->data = 14;
	first->next = second;
	
	second->data = 24;
	second->next = third;
	
	third->data = 34;
	third->next = head;
	
	transverse(head);
	head = InsertAtNode(head,second,546);
	transverse(head);
	return 0;
}
































