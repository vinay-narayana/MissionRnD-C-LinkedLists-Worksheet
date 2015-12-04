/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node *lptr;

lptr insertend(lptr head, int x)
{
	lptr p, t;
	p = (lptr)malloc(sizeof(struct node));
	p->data = x;
	p->next = NULL;
	if (head == NULL)
	{
		head = p;
		return head;
	}
	t = head;
	while (t->next != NULL)
		t = t->next;
	t->next = p;
	return head;
}
void sll_012_sort(struct node *head)
{
	lptr t = head;
	int zero = 0, one = 0, two = 0;
	while (t != NULL)
	{
		if (t->data == 0)
			zero++;
		if (t->data == 1)
			one++;
		if (t->data == 2)
			two++;
		t = t->next;
	}
	head = NULL;
	while (zero != 0)
	{
		head = insertend(head, 0);
		zero--;
	}
	while (one != 0)
	{
		head = insertend(head, 1);
		one--;
	}
	while (two != 0)
	{
		head = insertend(head, 2);
		two--;
	}
}