#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - excutes f callback function
 * @name: name to be printed
 * @f: how it's going to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}
