#include <stdio.h>
int main(){
	
	char st1[34];
	char st2[34];
	int i = 0;
	char c;
	printf("Enter the value of first string ",st1);
	scanf("%s",st1);
	
	scanf("%c",&c);
	while(c!="\n"){
		fflush(stdin);
		scanf("%c",&c);
	st2[i] = c;
		i++;
	}
	st2[i] = "\0";
	printf("The value of st1 is %s\n",st1);
	printf("The value of st2 is %s\n",st2);
		
	return 0;
}


































