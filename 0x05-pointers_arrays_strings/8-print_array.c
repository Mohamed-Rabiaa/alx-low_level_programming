#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: the array to print its elements
 * @n: the number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	print("\n");
}
