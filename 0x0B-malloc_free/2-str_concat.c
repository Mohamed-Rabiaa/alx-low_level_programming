#include <stdlib.h>
#inlclude "main.h"
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

	int size1 = _
