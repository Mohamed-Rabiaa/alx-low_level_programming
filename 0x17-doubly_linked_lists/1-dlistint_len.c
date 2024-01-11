#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h: a pointer to the first node in dlistint_t list
 *
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;

	int node_counter = 0;

	if (!h)
		return (0);

	while (temp)
	{
		node_counter++;
		temp = temp->next;
	}
	return (node_counter);
}
