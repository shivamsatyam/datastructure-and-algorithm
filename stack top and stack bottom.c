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

int stackTop(struct stack *ptr){
	printf("the top is %d\n",ptr->arr[ptr->top]);

}

int stackBotttom(struct stack *ptr){
	printf("The bottom is %d",ptr->arr[0]);
}


int main(){
	struct stack *head = (struct stack*)malloc(sizeof(struct stack));
	head->size = 100;
	head->top = -1;
	head->arr = (int *)malloc(head->size*sizeof(int));
	
	printf("65\n");
	printf("%d\n",head->top);
	
	stackTop(head);
	stackBotttom(head);
	
	return 0;
}


