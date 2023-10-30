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
	int i = 0, size;

	char *ptr;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	i = 0;

	ptr = malloc((size * sizeof(char)) + 1);

	if (ptr == 0)
		return (0);

	while (i < size)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
