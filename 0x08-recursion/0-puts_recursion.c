#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
