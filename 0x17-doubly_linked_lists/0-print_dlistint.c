#include <stdio.h>
#include "lists.h"

/**
  * print_dlistint - print elements in a list
  * @h: pointer to head of list
  *
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
