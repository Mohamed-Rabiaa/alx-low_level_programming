#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees a list_t list
 *@head: a pointer to the first element in the list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		ptr = head;

		while (ptr != NULL)
		{
			if (ptr->str != NULL)
				free(ptr->str);
			free(ptr);
			ptr = ptr->next;
		}
	}
}
