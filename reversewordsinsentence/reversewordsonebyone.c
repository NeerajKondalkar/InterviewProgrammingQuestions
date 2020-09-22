#include<stdio.h>
void printstring(char sentence[]){
	int top=0, temp=0;
	printf("reading the whole string : \n");
	while(sentence[top]!='\0'){
		printf("%c\n", sentence[top]);
		top++;
	}
	printf("length of string = %d\n", top);
	while(top>=0){
		if(sentence[top]!=' ' && top!=0){
			top--;
		}
		else{
			temp = top;
			if(top!=0){
				top++;
			}
			while(sentence[top]!=' ' && sentence[top]!='\0'){
				printf("%c", sentence[top]);
				top++;
			}
			printf(" ");
			top = temp;
			top--;
		}
	}
	printf("\n");
}

void main(){
	char sentence[100]="Hello this is tour guide\0";
	printstring(sentence);
}

