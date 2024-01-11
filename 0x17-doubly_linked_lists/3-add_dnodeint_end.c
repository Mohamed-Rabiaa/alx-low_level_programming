#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *@head: a pointer to the pointer of the first node in the list
 *@n: the integer of the new node
 *
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	if (!head)
		return (NULL);

	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
		*head = new;

	while (temp)
	{
		if (!temp->next)
		{
			temp->next = new;
			new->prev = temp;
			break;
		}
		temp = temp->next;
	}
	return (new);
}
