/**
 * print_name - prints a name in many different formats
 *		 depends on the passed function
 * @name: the name
 * @f: a pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

}
