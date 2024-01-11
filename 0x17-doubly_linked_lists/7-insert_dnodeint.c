#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: a pointer to the pointer of the first node in the list
 *@idx: the index of the new node
 *@n: the integer of the new node
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int index = 0;

	if (!h)
		return (NULL);
	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (index == idx)
		{
			new->prev = temp->prev;
			new->next = temp;
			if (temp->prev)
				temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		index++;
		temp = temp->next;
	}
	if (idx == index && temp == NULL)
	{
		new->prev = temp;
		if (new->prev)
			new->prev->next = new;
		return (new);
	}
	return (NULL);
}
