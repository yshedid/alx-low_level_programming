#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (s + 1)
		return;
	_puts_recusrion(s + 1);
}
