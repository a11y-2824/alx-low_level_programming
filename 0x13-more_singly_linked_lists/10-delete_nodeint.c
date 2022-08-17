#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node 
 * at index of a list
 * @head: pointer to type of listint_t
 * @index: index of th node to be deleted
 *
 * Return: 1 for success and -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev = *head;

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	
	{
		for (count = 0; (count < (index - 1)) && (prev != NULL); count++)
		{
			prev = prev->next;
		}
	}
	
	temp = prev->next;
	
	if (index != 0)
	
	{
		prev->next = temp->next;
		free(temp);
	}
	
	else
	
	{
		free(prev);
		*head = temp;
	}

	return (1);
}
