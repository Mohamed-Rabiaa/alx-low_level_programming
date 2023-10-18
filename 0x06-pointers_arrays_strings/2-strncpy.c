/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: the number of bytes that we copy from src
 *
 *Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	dest[i] = '\0';
	return (dest);
}