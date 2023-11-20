#include <stdio.h>
#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked listint_t list.
 *@h: a pointer to the list
 *
 *Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		ptr = ptr->next;

		count++;
	}
	return (count);
}
