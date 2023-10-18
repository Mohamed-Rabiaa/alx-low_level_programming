/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the number of bytes that we concatenate from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[i] != 0)
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
