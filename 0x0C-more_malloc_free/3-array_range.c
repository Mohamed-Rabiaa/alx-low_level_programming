#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: the minimum number to store in the array
 *@max: the maximum number to store in the array
 *
 *Return: a pointer to the newly created array or null
 *if there isn't sufficient memory
 */
int *array_range(int min, int max)
{
	unsigned int i, size;

	int *a;

	if (min > max)
		return (NULL);

	size = (unsigned int)(max - min) + 1;

	a = malloc(size * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
