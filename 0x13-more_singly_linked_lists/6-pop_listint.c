#include <stdlib.h>
#include "lists.h"

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
