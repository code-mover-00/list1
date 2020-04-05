#include<stdio.h>
#include<stdlib.h> 

typedef struct SListNode
{
	int data;
	struct SListNode *next; //link
}SListNode;

typedef struct SList
{
	SListNode *first;
	SListNode *last;
	size_t     size;
}SList;


SListNode* _Buynode(int x)
{
	SListNode *s = (SListNode *)malloc(sizeof(SListNode));
	s->data = x;
	s->next = NULL;
	return s;
}
