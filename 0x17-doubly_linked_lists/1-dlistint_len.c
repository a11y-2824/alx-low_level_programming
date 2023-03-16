#include <stdio.h>
#include "lists.h"

/**
  * dlistint_len - print number of elements in a list
  * @h: pointer to head of list
  *
  * Return: number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
