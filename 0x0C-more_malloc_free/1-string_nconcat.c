#include <stdlib.h>
/**
 *_strlen - returns the length of the string
 *@str: a string
 *
 *Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	int i;

	unsigned int length;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 **string_nconcat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: the first bytes to be copied from s2
 *
 *Return: a pointer to the newly allocated space in memory, which contains s1,
 *followed by the first n bytes of s2, and null terminated or NULL if there
 *isn't enough memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1Length, s2Length, ptrLength;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1Length = _strlen(s1);
	s2Length = _strlen(s2);

	if (n >= s2Length)
		n = s2Length;

	ptrLength = s1Length + n;

	ptr = malloc(ptrLength * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
