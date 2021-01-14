#include<stdio.h>
#include<stdlib.h>

//696k
struct queue{
	int size;
	int f;
	int r;
	int* arr;
};

void show(struct queue *q){
	int i;
	for(i=q->f+1;i<q->r+1;i++){
		printf("Element %d\n",q->arr[i]);
	}
}

int isEmpty(struct queue *q){
	if(q->r==q->r){
		return 1;
	}else{
		return 0;
	}
}

int isFull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}else{
		return 0;
	}
}

int dequeue(struct queue *q){
	q->f++;
	return q->arr[q->f];
}

void enqueue(struct queue*q,int val){
	if(isFull(q)){
		printf("The que is overflow now");
	}else{
		q->r++;
		q->arr[q->r] = val;
	}
}




int main(){
	
	struct queue q;
	q.size = 100;
	q.f = -1;
	q.r = -1;
	q.arr = (int*)malloc(q.size*sizeof(int));
	enqueue(&q,56);	
	enqueue(&q,46);	
	enqueue(&q,576);	
	enqueue(&q,756);	
	enqueue(&q,576);	
	
	dequeue(&q);
	
	show(&q);
	
	printf("%d",q.f);
	return 0;
}

























