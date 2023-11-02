#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: the number of elements inside the array
 *@size: the number of bytes for every element
 *
 *Return: a pointer to the newly allocated memory or
 *NULL if there isn't enough memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
