#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - frees a listint_t list.
 *@head: a pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;

		head = temp->next;

		free(temp);
	}
}
