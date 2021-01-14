#include<stdio.h>
#include<stdlib.h>



struct queue{
	int size;
	int f,r;
	int *arr;
	

};

//void show(struct queue *q){
//	int i;
//	for(i=(q->f)%q->size;i;i++){
//		
//	}
//}

void enqueue(struct queue *q,int value){
	if((q->r)%q->size == q->f){
		printf("queue oveflow");
	}else{
		q->r = (q->r)%q->size;
		q->arr[q->r] = value;
	}
	
	
}

int dequeue(struct queue *q){
	if(q->f==q->r){
		printf("queue undwrflow");
	}else{
		q->f =(q->f)%q->size;
		int a;
		a = q->arr[q->f];
		return a; 
	}
}


int main(){
	struct queue *head;
	head = (struct queue *)malloc(sizeof(struct queue));
	head->size = 100;
	head->f = -1;
	head->r = -1;
	head->arr  = (int *)malloc(head->size*sizeof(int));
	
	enqueue(head,34);
	dequeue(head);
	return 0;
}












