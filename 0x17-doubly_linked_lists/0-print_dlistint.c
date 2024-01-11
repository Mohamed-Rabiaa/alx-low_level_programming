#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: a pointer to the first node in dlistint_t list
 *
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;

	int node_counter = 0;

	if (!h)
		return (0);

	while (temp)
	{
		printf("%d\n", temp->n);
		node_counter++;
		temp = temp->next;
	}
	return (node_counter);
}
