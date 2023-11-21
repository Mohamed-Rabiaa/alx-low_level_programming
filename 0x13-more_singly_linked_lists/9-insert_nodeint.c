#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: a pointer to the pointer of the list
 *@idx: the index of the node to add
 *@n: the integer value to add to the data of the node
 *
 *Return: a pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *current, *previous = NULL, *new;

	if (!head)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));

		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;

	while (current)
	{
		if (count == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->next = current;

			if (previous)
				previous->next = new;
			return (new);
		}
		count++;
		previous = current;
		current = current->next;
	}
	return (NULL);
}
