/**
 *factorial - returns the factorial of a given number
 *@n: the number
 *
 *Return: if the given number is greater than zero return the factorial of it,
 *if the givern number is less than zero return -1,
 *if the given number equals zero return 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
