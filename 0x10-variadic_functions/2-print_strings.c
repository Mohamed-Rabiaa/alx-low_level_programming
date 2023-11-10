#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 *@separator: the string to be printed between the strings
 *@n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (separator == NULL && s == NULL)
			printf("nil");

		else if (separator != NULL && s == NULL)
			printf("nil");

		else if (separator != NULL && s != NULL && i == 0)
			printf("%s", s);

		else if (separator != NULL && s == NULL && i > 0)
			printf("%s(nil)", separator);

		else
			printf("%s%s", separator, s);
	}
	va_end(args);

	printf("\n");
}
