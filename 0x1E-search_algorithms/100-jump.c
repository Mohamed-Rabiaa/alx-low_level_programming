#include "search_algos.h"
#include <math.h>
/**
 *jump_search - searches for a value in a sorted array of integers
 *using the Jump search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *
 *Return: the first index where value is located
 *or -1 if value is not present in array or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, low, high, i;

	m = sqrt(size);

	if (!array)
		return (-1);

	for (low = 0; low < size; low = low + m)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       low, array[low]);
		high = low + m;

		if (high >= size || (value >= array[low] &&
				     value <= array[high]))
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       low, high);
			i = low;

			while (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n", i,
				       array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
