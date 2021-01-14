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
		printf("The data is  %d  \n",ptr->data);
		ptr = ptr->next;
	}while(ptr!=head);
//	printf("\n\n\n");
//		printf("The data is  %d  \n",ptr->data);
		printf("\n\n\n");
}

struct Node *deletefirst(struct Node *head){
	struct Node *p = head;
	struct Node *ptr =head;
	while(p->next!=head){
		p = p->next;
	} 
//	printf("The data is %d",p->data);
	head = head->next;
	p->next = head;
	free(ptr);
	return head;
	
	
	
}

struct Node *insertAtfirst(struct Node *head,int index){
	struct Node *p = head;
	struct Node *ptr = head;
	int i=0;
	while(i!=(index-2)){
		
		i++;
		p = p->next;
	}
		
//	printf("The data is %d",p->data);
	ptr = p->next;
//	printf("\n  the data of the ptr is %d",ptr->data);
	p->next = ptr->next;
//	printf("The data is %d",ptr->data);
	free(ptr);

	return head;
}
struct Node *deleteAtLast(struct Node *head){
	struct Node *p = head;
	struct Node *ptr = head;
	do{
		p = p->next;
	}while(p->next!=head);
	do{
		ptr = ptr->next;
	}while(ptr->next!=p);
	
//	printf("The data of p is %d\n",p->data);
//	printf("The data of p is %d\n",ptr->data);
	
	ptr->next = head;
	free(p);
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
	head = deleteAtLast(head);
	transverse(head);
	return 0;
}
















