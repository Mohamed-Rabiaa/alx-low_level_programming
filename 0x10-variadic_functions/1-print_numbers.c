#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int num;

	va_list args;

	if (n > 0)
		va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%d%s", num, separator);
			else
				printf("%d", num);
		}
		else
		{
			printf("%d\n", num);

		}
	}
	if (n > 0)
		va_end(args);
}
