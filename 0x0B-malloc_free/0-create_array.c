#include <stdlib.h>
/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char
 *@size: the size of the array
 *@c: the character to initialize the array with
 *
 *Return: a pointer to the array or null if it fails
 *or if the size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (0);
	else
		ptr = malloc(size * sizeof(char));
	return (ptr);
}
