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

	listint_t *temp, *new;

	if (!head || !*head == NULL)
		return (NULL);

	temp = *head;

	while (temp)
	{
		if (count == idx)
		{
			temp->n = n;
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	if (count == idx)
	{
		new = malloc(sizeof(listint_t));

		if (!new)
			return (NULL);

		new->n = n;

		new->next = NULL;

		temp = new;

		return (temp);
	}
	return (NULL);
}
