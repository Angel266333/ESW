#pragma once

typedef struct node {
	void* data;
	struct node* next;
} node;

typedef struct linkedList {
	node * start;
	int count;
}linkedList;


int add_item(void*item, linkedList *list);
void *get_item(uint16_t index, linkedList *list);
int no_of_items(linkedList *list);
int remove_item(void*item, linkedList *list);
