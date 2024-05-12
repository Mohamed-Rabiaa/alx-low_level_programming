#include "search_algos.h"
/**
 *min - Returns the minimum of two integers
 *@a: the first integer
 *@b: the second integer
 *
 *Return: the the minimum of two integers
 */
size_t min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
/**
 *bnry_search - Searches for a value in a sorted array of integers
 *using the Binary search algorithm and prints the searched array
 *@arr: a pointer to the first element of the array to search in
 *@low: the lowist index of the array
 *@high: the highest index of the array
 *@value: the value to search for
 *
 *Return: the index where value is located
 *or -1 if value is not present in array
 */
int bnry_search(int *arr, int low, int high, int value)
{
	int  mid, i = low;

	if (high >= low)
	{
		printf("Searching in array: ");
		while (i <= high)
		{
			if (i != high)
				printf("%d, ", arr[i]);
			else
				printf("%d\n", arr[i]);
			i++;
		}
		mid = (low + high) / 2;
		if (arr[mid] == value)
			return (mid);
		if (arr[mid] < value)
			return (bnry_search(arr, mid + 1, high, value));
		return (bnry_search(arr, low, mid - 1, value));
	}
	return (-1);
}
/**
 *exponential_search - searches for a value in a sorted array of integers
 *using the Exponential search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *
 *Return: the first index where value is located
 *or -1 if value is not present in array or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2,
	       min(i, size - 1));
	return (bnry_search(array, i / 2, min(i, size - 1), value));
}
