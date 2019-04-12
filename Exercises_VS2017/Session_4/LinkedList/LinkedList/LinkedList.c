#include <stdio.h>
#include <stdint.h>
#include "LinkedList.h"
#include <stddef.h>

struct Node {
	void* data;
	struct node* next;
};

struct LinkedList {
	node * start;
	int count;
};


int add_item(void*item, linkedList *list) {
	if (item == NULL || list == NULL) {
		return -1;
	}

	node* tmp = (node*) malloc(sizeof(node));
	tmp->data = item;
	tmp->next = NULL;
	/*
	node tmp;
	tmp.data = item;
	tmp.next = NULL;
	*/
	//if start is null, we add the object to the first space.
	if (list->start == NULL) {
		list->start = tmp;
		return 0;
	}
	node* nodePointer = list->start;

	//We override until the nodePointer object is null;
	while (nodePointer -> next != NULL) {
		nodePointer = nodePointer->next;

	}
	
	nodePointer->next = tmp;
	list->count++;
	return 0;
}

void * get_item(uint16_t index, linkedList *list)
{

	node* current = list->start;

	if (current == NULL) {
		return NULL;
	}

	for (int i = 0; i < index; i++) {
		current = current->next;
	}



	return current->data;
}
int no_of_items(linkedList *list) {
	return list->count;
}

int remove_item(void*item, linkedList *list) {
	
	if (list->start == NULL) {
		return -1;
	}
	node* nodePointer = list->start;

	//We override untill the nodePointer object is null;
	while (nodePointer->next != NULL) {

		if (item == nodePointer->next->data) {
			node* to_remove = nodePointer->next;

			nodePointer->next = nodePointer->next->next;
			
			free(to_remove);
			list->count--;
			return 0;
		}
		nodePointer = nodePointer->next;
	}

	return -1;
}

