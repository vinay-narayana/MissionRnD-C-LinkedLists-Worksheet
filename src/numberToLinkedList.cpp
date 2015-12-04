/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node *lptr;

lptr insert(lptr first, int x)
{
	lptr p, t=NULL;
	p = (lptr)malloc(sizeof(struct node));
	p->num = x;
	p->next = NULL;
	if (first == NULL)
	{
		first = p;
		return first;
	}
	p->next = first;
	first = p;
	return first;
}

struct node * numberToLinkedList(int N) {
	lptr first = NULL;
	int r = 0;
	if (N < 0)
		N *= -1;
	if (N == 0)
		first = insert(first, N);
	while (N != 0)
	{
		first = insert(first, N % 10);
		N /= 10;
	}
	return first;

}

