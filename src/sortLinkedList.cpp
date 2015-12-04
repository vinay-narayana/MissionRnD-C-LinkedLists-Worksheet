/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
typedef struct  node *lptr;
struct node * sortLinkedList(struct node *head) {
	lptr t = head, p = NULL,index=NULL;
	int no,temp;
	while (t != NULL)
	{
		index = t;
		no = t->num;
		for (p = t; p != NULL; p = p->next)
		{
			if (no < p->num)
			{
				no = p->num;
				index = p;
			}
		}
		index->num = t->num;
		index->num = no;
		t = t->next;
	}
	return head;

}