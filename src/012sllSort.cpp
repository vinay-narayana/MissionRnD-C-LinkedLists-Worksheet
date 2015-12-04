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
	t = head;
	while (zero != 0)
	{
		t->data = 0;
		t = t->next;
		zero--;
	}
	while (one != 0)
	{
		t->data = 1;
		t = t->next;
		one--;
	}
	while (two != 0)
	{
		t->data = 2;
		t = t->next;
		two--;
	}
}