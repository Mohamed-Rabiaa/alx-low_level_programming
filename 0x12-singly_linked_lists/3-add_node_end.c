#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *_str_len - returns the length of a string
 *@s: the string
 *
 *Return: the length of the string or -1 if the string is NULL
 */
int _str_len(const char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: a pointer to the pointer of the first element of the list
 *@str: the string of the new node
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;

	list_t *ptr, *new;

	if (head == NULL || str == NULL)
		return (NULL);

	len = _str_len(str);

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	new->len = len;

	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}

	return (new);
}
