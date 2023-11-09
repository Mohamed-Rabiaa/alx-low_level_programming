#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: the number of arguments
 *
 *Return: the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
