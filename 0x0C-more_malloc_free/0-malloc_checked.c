/**
 *malloc_checked - Returns a pointer to the allocated memory
 *@b: the number of bytes to be allocated
 *
 *Return: a pointer to the allocated memory if succeeded
 *or cause normal process termination with a status value of 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
