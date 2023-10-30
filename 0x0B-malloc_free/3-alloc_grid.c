#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array that is saved in
 * a newly allocated memory
 *@width: the width of the array
 *@height: the height of the array
 *
 *Return: a pointer to a 2 dimensional array or NULL if there
 *isn't any sufficient memory
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr;

	if (width <= 0 || height <= 0)
		return (0);

	arr = (int **)malloc(width * sizeof(int *));

	if (arr == 0)
		return (0);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(height * sizeof(int));

		if (arr[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (0);
		}
		for (j = 0; j < height; j++)

			*(*(arr + i) + j) = 0;
	}
	return (arr);
}
