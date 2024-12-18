#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: a pointer to the pointer of the first node in the list
 *@n: the integer of the new node
 *
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
