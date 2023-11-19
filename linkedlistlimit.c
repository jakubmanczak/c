#include <stdio.h>
#include <stdlib.h>

#define LISTLIMIT 7

typedef struct entry{
	int content;
	struct entry *next;	
} entry;

int size_of_list(entry *head){
	int i = 0; entry *current = head;
	while(current){
		i++; current = current->next;
	}
	return i;
}

int main(void){
	entry *list = NULL; entry *temp = NULL; int buffer = 0;
	while(1){
		printf("The list is currently %d items long.\n", size_of_list(list));
		printf("Insert a number: "); scanf("%d", &buffer);
		if(list){
			if(size_of_list(list) == LISTLIMIT){
				temp = list; list = list->next; free(temp);
			}
			temp = list; while(temp->next) temp = temp->next;
			temp->next = malloc(sizeof(entry));
			temp->next->content = buffer;
			temp->next->next = NULL;
		}else{
			list = malloc(sizeof(entry));
			list->content = buffer;
			list->next = NULL;
		}
		printf("\033c");
		temp = list; printf("Items: ");
		while(temp){
			printf("%d ", temp->content); temp = temp->next;
		} printf("\n\n");
	}
	return 0;
}
