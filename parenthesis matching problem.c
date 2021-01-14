//(x-(y*z))
//
//xyz*-
//
//
//
//prefix
//
//x-[*yz]
//-x*yz
//
//
//
//p-q-r/q
//prefix
//((p-q)-(r/q))
//([-pq]-[/rq])
//--pq/rq
//
//post fix
//((p-q)-(r/q))
//([pq-]-[rq/])
//
//
//pq-rq/-
//
//
//
//((m-n)*(p+q))
//postfix
//(mn-)*(pq+)
//mn-pq+*
//
//
//
//
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node{
//	int data;
//	int top;
//	char *ptr;
//	
//};
//
//void push(struct Node *ptr,int data){
//	ptr->top++;
//	ptr->ptr[ptr->top] = data;
//}
//
//void pop(struct Node *ptr){
//	ptr->top--;
//}
//
//int isEmpty(struct Node *p){
//	if(p->top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int paranthesis(char *ch){
//	struct Node *ptr;
//	ptr->data = 100;
//	ptr->top = -1;
//	ptr->ptr = (char *)malloc(ptr->data*sizeof(char));
//	int i;
//	for(i=0;ch[i]!='\0';i++){
//		if(ch[i]=='('){
//			push(ptr,'(');
//		}else if(ch[i]==')'){
//			pop(ptr);
//		}
//	}
//	
//	if(isEmpty(ptr)){
//		return 1;
//	}else{
//		return 0;
//	}
//
//}
//
//int main(){
//	
//	char *a = "(8)+9)";
////	printf("%c",a[1]);
//	int result = paranthesis(a);
//	if(result==1){
//		printf("The equation is correct\n");
//	}else{
//		printf("The equation is not correct");
//	}
//	return 0;
//}
//
//
//
//
//
























#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	int top;
	char *arr;

};

void show(struct Node *head){
	int i;
	for(i=0;i<head->top+1;i++){
		printf("Element is %c :  ",head->arr[i]);
	}
}

void push(struct Node *head,char b){
	head->top++;
	char a = b;
	head->arr[head->top] = a;
}

void pop(struct Node *head){
	int value = head->arr[head->top];
	head->top--;
	
}

int check(struct Node *head,char *ptr){
	while(*ptr!='\0'){
		if(*ptr=='('){
			head->top++;
			head->arr[head->top] = '(';
		}else if(*ptr==')'){
			if((head->top==-1)){
				printf("Invalid expresiion");
			}else{
				head->top--;
				return 1;
			}
		}else{
			return 2;
		}
	ptr++;
	}
	

}
int main(){
//7-8(3*9)+11+12))-8)
struct Node *head;
head = (struct Node *)malloc(sizeof(struct Node));
head->data = 100;
head->top = -1;
head->arr = (char *)malloc(100*sizeof(char));

char r[100];
printf("Enter your string\n");
scanf("%s",r);
int element = check(head,r);
show(head);
printf("\n\nthe result is %d",element);
}







//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node{
//	int size;
//	int top;
//	char *arr;
//		
//};
//
//
//int  isFull(struct Node *ptr){
//	int top = ptr->top;
//	int size = ptr->size;
//	if(top==size-1){
////		printf("The stack is now full");
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int  isEmpty(struct Node *ptr){
//	int top = ptr->top;
//	int size = ptr->size;
//	if(top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//	
//}
//
//void push(struct Node *ptr,char data){
//	ptr->top++;
//	ptr->arr[ptr->top] = data;
//}
//
//char  pop(struct Node *ptr){
//	char value = ptr->arr[ptr->top];
//	ptr->top--;
//	return value;		
//}
//
//int parenthesisMatch(char *exp){
//	struct Node *sp;
//	sp->size = 100;
//	sp->top = -1;
//	sp->arr = (char *)malloc(sp->size*sizeof(char));
//	int i;
//	for(i=0;exp[i]!='\0';i++){
//		if(exp[i]='('){
//			push(sp,'(');
//		}else if(exp[i]==')'){
//			if(isEmpty(sp)){
//				return 0;
//			}else{
//				pop(sp);
//			}
//		}
//	}
//	
//	if(isEmpty(sp)){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int main(){
//
//char *ex = "8*(5+4)";
//if(parenthesisMatch(ex)){
//	printf("Your parenthesis matchn\n");
//}else{
//	printf("Your parenthesis does not match \n");
//}
//
//}
//
//

// Mutiple parenthesis
/*
#include<stdio.h>
#include<stdlib.h>





struct Node{
	int size;
	int top;
	char *arr;

};

void show(struct Node *head){
	int i;
	for(i=0;i<head->top+1;i++){
		printf("Element is %c :  ",head->arr[i]);
	}
}

void push(struct Node *head,char b){
	head->top++;
	char a = b;
	head->arr[head->top] = a;
}

void pop(struct Node *head){
	int value = head->arr[head->top];
	head->top--;
	
}

int isEmpty(struct Node *head){
	if(head->top==-1){
		return 1;
	}else{
		return 0;
	}
}

int check(struct Node *head,char *ptr){
	while(*ptr!='\0'){
		if(*ptr='['){
			push(head,'[');
		}else if(*ptr='{'){
			push(head,'{');
		}else if(*ptr=='('){
			push(head,'(');
		}
		else if(*ptr==')'){
			if(isEmpty){
				return 0;
			}else{
				pop(head);
			}
		}
		else if(*ptr=='}'){
			if(isEmpty){
				return 0;
			}else{
				pop(head);
			}
		}
		else if(*ptr==']'){
			if(isEmpty){
				return 0;
			}else{
				pop(head);
			}
		}
			
		ptr++;
	}

	if(isEmpty(head)){
		return 1;
	}else{
		return 0;
	}

}

int main(){
	struct Node *head;
	head = (struct Node *)malloc(sizeof(struct Node));
	head->size = 100;
	head->top = -1;
	head->arr = (char *)malloc(head->size*sizeof(char));

	char r[100];
	printf("Enter the character\n");
	scanf("%s",r);
	

	printf("The result of the data is %d",check(head,r));
	show(head);
	return 0;
}




*/














































