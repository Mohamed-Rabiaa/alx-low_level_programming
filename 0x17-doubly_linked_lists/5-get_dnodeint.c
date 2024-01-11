#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: a pointer to the first node in the list
 *@index: the index of the node to return
 *
 *Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	dlistint_t *searched_node = NULL;

	unsigned int idx = 0;

	while (temp)
	{
		if (idx == index)
		{
			searched_node = temp;
			break;
		}
		idx++;
		temp = temp->next;
	}
	return (searched_node);
}
