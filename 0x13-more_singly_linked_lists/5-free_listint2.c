#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - frees a listint_t list.
 *@head: a pointer to the pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;

			*head = temp->next;

			free(temp);
		}
		head = NULL;
	}
}
