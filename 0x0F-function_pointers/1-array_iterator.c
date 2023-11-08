#include <stddef.h>
/**
 *array_iterator - executes a function given as a parameter on each element
 *of an array
 *@array: an array of integers
 *@size: the size of the array
 *@action: a pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != 0 && array != 0 && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
