/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: the number to raise
 *@y: the power
 *
 *Return: if y is greater than zero return the value of x raised to the power
 *of y, if y is less than zero return -1, if y equals zero return 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
