#include "lists.h"
/**
 *free_dlistint - frees a dlistint_t list.
 *@head: a pointer to the pointer of the first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head)
	{
		while (temp)
		{
			free(temp);
			temp = temp->next;
		}
	}
}
