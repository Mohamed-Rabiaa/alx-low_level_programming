#include <stddef.h>
#include "lists.h"
/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: a pointer to the list
 *
 *Return: the sum of all the data (n) of a listint_t linked list
 *or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	if (!head)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;

		temp = temp->next;
	}
	return (sum);
}
