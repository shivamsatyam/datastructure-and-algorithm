





#include<stdio.h>
#include<stdlib.h>
#include<string>

struct Node{
	int size;
	int top;
	char *arr;
		
};


int  isFull(struct Node *ptr){
	int top = ptr->top;
	int size = ptr->size;
	if(top==size-1){
//		printf("The stack is now full");
		return 1;
	}else{
		return 0;
	}
}

int  isEmpty(struct Node *ptr){
	int top = ptr->top;
	int size = ptr->size;
	if(top==-1){
		return 1;
	}else{
		return 0;
	}
	
}

void push(struct Node *ptr,char data){
	ptr->top++;
	ptr->arr[ptr->top] = data;
}

char  pop(struct Node *ptr){
	char value = ptr->arr[ptr->top];
	ptr->top--;
	return value;		
}

int stacktop(struct Node *arr){
	return arr->arr[arr->top];
}

char *infixtopostfix(char *infix){
	struct Node *sp;
	sp->size = 100;
	sp->top = -1;
	sp->arr = (char *)malloc(sp->size*sizeof(struct Node));
	char *postfix= (char *)malloc((strlen(infix)+1)*sizeof(char));
	int i=0; // for infix
	int j=0; // for postfix
	
	while(infix[i]!='\0'){
		if(!isOperator(infix[i])){
			postfix[j] = infix[i];
			j++;
			i++;
		}else{
			if(precednce(infix[i])>precedence(stacktop(sp))){
				push(sp,infix[i]);
				i++;
			}else{
				postfix[j] = pop(sp);
				j++;
			}
		}
				
	}
	
}

int main(){

	char *infix = "a-b+t/6";

	return 0;
}

































































