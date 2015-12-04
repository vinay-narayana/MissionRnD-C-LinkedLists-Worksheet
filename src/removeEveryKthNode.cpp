/*
OVERVIEW: Given a single nexted list, remove every Kth node in the nexted list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A nexted list and Value of K.

OUTPUT: Remove every Kth node in the nexted list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node *lptr;

struct node * removeEveryKthNode(struct node *head, int K)
{
	lptr t = head, temp = NULL;
	int i=0;
	if (head == NULL || K <=1)
		return NULL;
	while (t->next != NULL)
	{
		i++;
		if (i == K - 1)
		{
			t->next = (t->next)->next;
			i = 0;
		}
		t = t->next;
	}
	return head;
}