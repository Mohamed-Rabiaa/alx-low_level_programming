#include <stdlib.h>
/**
 *argstostr -  concatenates all the arguments of our program
 *@ac: the number of arguments
 *@av: the arguments
 *
 *Return: a pointer to the concatenated string or null
 *if there isn't enough memory
 */
char *argstostr(int ac, char **av)
{
	char *s;

	int i, j, x = 0, charcount = 0;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		charcount++;
		for (j = 0; av[i][j] != '\0'; j++)
			charcount++;
	}
	s = (char *) malloc((charcount * sizeof(char)) + 1);

	if (s == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[x] = av[i][j];
			x++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}
