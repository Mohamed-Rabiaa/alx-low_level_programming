#include <stdlib.h>
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
/**
 *str_concat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *
 *Return: a point to the  newly allocated space in memory which contains the
 *contents of s1, followed by the contents of s2, and null terminated
 *or null if there isn't sufficient memory
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	int i;

	int size1 = _strlen(s1);

	int size2 = _strlen(s2);

	int strsize = size1 + size2;

	str = malloc((strsize * sizeof(char)) + 1);

	if (str == 0)
		return (0);
	for (i = 0; i < strsize; i++)
	{
		if (s1[i] != '\0')
			str[i] = s1[i];
		else
			str[i] = s2[i];
	}
	str[i] = '\0';
	return (str);
}
