#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: singly linked list
 *
 * Return: number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int a;

	a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;

	}
	return (a);
}
