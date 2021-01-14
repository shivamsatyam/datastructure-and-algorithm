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

struct Node *firstdelelte(struct Node *head){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

struct Node *Atbetween(struct Node *head,int index){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node *p = head;
	int i=0;

	while(i!=index-2){
		p = p->next;
//		printf("The data is p %d",p->data);
		i++;
	}
	ptr =p->next;
	p->next = ptr->next;
	 free(ptr);

	return head;
}

struct Node *deleteAtend(struct Node *head){
	struct Node *p = head;
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr = p->next;
	while(ptr->next!=NULL){
//		printf("The data of p is %d\n",p->data);
//		printf("The data of ptr is %d\n",ptr->data);
		ptr = ptr->next;
		p = p->next;
//		printf("\n\nThe data of p is %d\n",p->data);
//		printf("\n\nThe data of ptr is %d\n",ptr->data);
	}
	p->next =  NULL;
	free(ptr);	
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
//	head = firstdelelte(head);
//	show(head);
//	head = Atbetween(head,2);
//	show(head);
//	

	head = deleteAtend(head);
	show(head);
	return 0;
}
















