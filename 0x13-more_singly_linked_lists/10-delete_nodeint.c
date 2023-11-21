#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index index
 *of a listint_t linked list.
 *@head: a pointer to the pointer of the list
 *@index: the index of the node to delete
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *previous = NULL, *current;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current)
	{
		if (count == index)
		{
			if (previous)
				previous->next = current->next;
			free(current);
			return (1);
		}
		count++;

		previous = current;

		current = current->next;
	}
	return (-1);
}
