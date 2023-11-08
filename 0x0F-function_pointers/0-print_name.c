/**
 *print_name - prints a name
 *@name: the name to print
 *@f: a pointer to the function that determines how to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	f(name);
}
