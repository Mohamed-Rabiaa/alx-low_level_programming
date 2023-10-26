int square(int n, int guess);
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the given number
 *
 *Return: the natural square root of a number or -1 if the number
 *doesn't have a square root.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

int square(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess < n)

		return (square(n, guess + 1));
	else
		return (-1);
}
