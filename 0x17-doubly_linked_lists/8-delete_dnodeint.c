#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index index
 *of a dlistint_t linked list
 *@head: a pointer to the pointer of the first node in the list
 *@index: the index of the node to delete
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int idx = 0;

	if (!head || !*head)
		return (-1);

	temp = *head;
	if (index == 0 && temp)
	{
		if (temp->next)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (idx == index && temp)
		{
			if (temp->prev)
				temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		idx++;
		temp = temp->next;
	}
	return (-1);
}
