#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
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
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		count++;
	}
	return (count);
}
