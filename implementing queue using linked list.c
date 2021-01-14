#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};


void show(struct Node *ptr){
	while(ptr!=NULL){
		printf("The element is %d\n",ptr->data);
		ptr = ptr->next;
	}
}

void enqueue(int val){
	
	struct Node *n = (struct Node*)malloc(sizeof(struct Node));
	if(n==NULL){
		printf("queue overflow \n");
	}else{
		n->data = val;
		n->next = NULL;
		if(f==NULL){
			f=r=n;
		}else{
			r->next = n;
			r = n;
		}
	}	
	
}
struct Node *f=NULL;
struct Node *r=NULL;

int main(){
	
	
	enqueue(45);
	enqueue(55);
	enqueue(65);
	enqueue(75);
	
	show(f);
	
	
	return 0;
}


































