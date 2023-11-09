/**
 * print_name - excutes f callback function
 * @name: name to be printed
 * @f: how it's going to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
