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

	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	switch (size)
	{
	case sizeof(int):
		ptr = (int *) malloc(nmemeb * sizeof(int));
		break;

	case sizeof(char):
		ptr = (char *) malloc(nmemb * sizeof(char));
		break;

	case sizeof(double):
		ptr = (double *) malloc(nmemb * sizeof(double));
		break;
	case sizeof(float):
		ptr = (float) malloc(nmemb * sizeof(double));
		break;
	default:
		break;
	}

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	  ptr[i] = 0;

	return (ptr);
}
