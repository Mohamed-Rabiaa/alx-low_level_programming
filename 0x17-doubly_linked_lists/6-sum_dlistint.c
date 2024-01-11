#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 *@head: a pointer to the first node in dlistint_t list
 *
 *Return: the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp = head;

	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
