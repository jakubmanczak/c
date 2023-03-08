#include <stdio.h>
#include <stdlib.h>

typedef struct nodeInner{
	int tile;
	struct nodeInner* next;
} node;

void printLinkedList(node* _head){
	node* current = _head;
	while(current != NULL){
		printf("%d ", current->tile);
		current = current->next;
	}
}

int sizeofLinkedList(node * _head){
	node* current = _head;
	int size = 0;
	while(current != NULL){
		current = current->next; size++;
	}
	return size;
}

void pushToLastPlaceInLinkedList(node* _head, int _tile){
	node* current = _head;
	while(current->next != NULL) current = current->next;
	current->next = (node*) malloc(sizeof(node));
	current->next->tile = _tile;
	current->next->next = NULL;
}

node* pushToFirstPlaceInLinkedList(node* _head, int _tile){
	node* secondplace = _head;
	node* firstplace = (node*) malloc(sizeof(node));
	firstplace->next = secondplace;
	firstplace->tile = _tile;
	return firstplace;
}

int main(void){
	node* head = NULL;
	head = (node*) malloc(sizeof(node));
	head->next = NULL; head->tile = 1;
	pushToLastPlaceInLinkedList(head, 3);
	pushToLastPlaceInLinkedList(head, 7);
	head = pushToFirstPlaceInLinkedList(head, 2);
	printLinkedList(head);
	printf("\n");
	printf("size of the linked list: %d\n", sizeofLinkedList(head));
	return 0;
}