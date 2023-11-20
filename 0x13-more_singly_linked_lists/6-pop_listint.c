#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint -  deletes the head node of a listint_t linked list,
 *and returns the head node’s data (n).
 *@head: a pointer to the pointer of the list
 *
 *Return: the head node’s data (n) or zero if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *ptr;

	if (!head || !*head)
		return (0);

	ptr = *head;

	n = ptr->n;

	*head = ptr->next;

	free(ptr);

	return (n);
}
