#include <stdio.h>
#include "lists.h"

/**
 *print_listint - prints all the elements of a listint_t list.
 *@h: a pointer to the list
 *
 *Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	const listint_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		printf("%d\n", ptr->n);

		ptr = ptr->next;

		count++;
	}
	return (count);
}
