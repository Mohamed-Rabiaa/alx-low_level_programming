#include <stdlib.h>
int _strlen(char *s);
/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter
 *@str: a given string
 *
I*Return: a pointer to the copy of the string that is saved in the
*new allocated space or null if there isn't sufficent memory
*/
char *_strdup(char *str)
{
	int i = 0, size = 0;

	char *ptr;

	if (str == 0)
		return (0);
	size = _strlen(str);

	ptr = malloc((size * sizeof(char)) + 1);

	if (ptr == 0)
		return (0);

	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 *_strlen - returns the length of a given string
 *@s: a string
 *
 *Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
