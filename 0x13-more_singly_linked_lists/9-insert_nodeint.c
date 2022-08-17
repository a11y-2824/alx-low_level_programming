#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node 
 * at a given position
 * @head: pointer to type of listint_t
 * @idx: index where new node will be added
 * @n: int parameter
 *
 * Return: the address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *temp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	
	for (; count < (idx - 1); count++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
