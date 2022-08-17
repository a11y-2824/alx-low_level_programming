#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: pointer to pointer of type listint_t
 *
 * Return: returns the head of node's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_copy;

	if (head == NULL || !(*head))
		return (0);

	temp = *head;
	n_copy = temp->n;
	
	*head = temp->next;
	free(temp);

	return (n_copy);
}
