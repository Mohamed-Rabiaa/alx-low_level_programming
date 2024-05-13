#include "search_algos.h"
int search(int *arr, int low, int high, int value);
/**
 *advanced_binary - Searches for a value in a sorted array of integers
 *using the advanced Binary search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *
 *Return: the index where value is located
 *or -1 if value is not present in array or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search(array, 0, size - 1, value));
}
/**
 *search - Searches for a value in a sorted array of integers
 *using the Binary search algorithm and prints the searched array
 *@arr: a pointer to the first element of the array to search in
 *@low: the lowist index of the array
 *@high: the highest index of the array
 *@value: the value to search for
 *
 *Return: the index where value is located
 *or -1 if value is not present in array
 */
int search(int *arr, int low, int high, int value)
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
		if (arr[low] == value)
			return (low);
		mid = (low + high) / 2;
		if (arr[mid] == value)
			return (search(arr, low, mid, value));
		if (arr[mid] < value)
			return (search(arr, mid + 1, high, value));
		return (search(arr, low, mid - 1, value));
	}
	return (-1);
}
