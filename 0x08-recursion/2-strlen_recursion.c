#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return (0);
	_putchar(*s);
	_putchar('\n');
	return (1 + _strlen_recursion(s + 1));
}
