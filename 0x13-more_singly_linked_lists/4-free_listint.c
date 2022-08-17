#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: Address of the first node of a list
 *
 * Return:0
 **/
void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	t = head;
	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}
