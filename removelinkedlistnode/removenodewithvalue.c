#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

void print_list(Node* head){
	int i=0;
	Node *mynodep = head;
	while(mynodep!=NULL){	
		printf("[%d]  :   %d\n", i, mynodep->data);
		mynodep = mynodep->next;
		i++;
	}
}

void remove_node(Node* head, int x){
	Node *mynodep = head;
	while(mynodep->next!=NULL){
		if((mynodep->next->data)==x){
			mynodep->next = mynodep->next->next;
		}
		else{
			mynodep = mynodep->next;
		}
	}
}

void main(){
	Node *mynodep, *head;
	int i, x;
	head = mynodep = NULL;
	mynodep = (Node*)malloc(sizeof(Node));
	head = mynodep;
	for(i=0; i<10; i++){
		mynodep->data = i+10;
		if(i==9){
			mynodep->next == NULL;
		}
		else{
			mynodep->next = (Node*)(mynodep+sizeof(Node));
		}
		mynodep = mynodep->next;
	}
	print_list(head);
	x=12;
	printf("removing element x = %d\n", x);
	remove_node(head, x);
	printf("printing list without x = %d\n", x);
	print_list(head);
}
