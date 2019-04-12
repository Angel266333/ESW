#pragma once

typedef struct LinkedList * liList_p;
typedef struct Node node_p;

liList_p liListCreate()
int add_item(void*item, linkedList *list);
void *get_item(uint16_t index, linkedList *list);
int no_of_items(linkedList *list);
int remove_item(void*item, linkedList *list);
