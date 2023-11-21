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

	listint_t *current, *previous, *new;

	if (!head || !*head)
		return (NULL);

	current = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (current)
	{
		if (count == idx)
		{
			new->next = current->next;
			free(current);
			current = new;
			previous->next = new;
			return (new);
		}
		count++;
		current = current->next;
		previous = current;
	}
	return (NULL);
}
