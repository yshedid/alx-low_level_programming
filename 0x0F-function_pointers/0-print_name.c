#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name in many different formats
 *		 depends on the passed function
 * @name: the name
 * @f: a pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);

}
