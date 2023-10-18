/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	char res[100];

	while (dest[i] != '\0')
		res[i] = dest[i];
		i++;

	while (src[j] != '\0')
	{
		res[i] = src[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
