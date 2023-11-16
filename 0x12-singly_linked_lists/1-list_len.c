#include <stdio.h>
#include "lists.h"

/**
 *len_list - returns the number of elements in a linked list_t list.
 *@h: the address of the first element in the list
 *
 *Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;

	int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
