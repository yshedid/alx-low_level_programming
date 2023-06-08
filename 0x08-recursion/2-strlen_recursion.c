#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string
 *
 * Return: the length
 */
int _strlen_recursion(*s)
{
	int n;

	n = 1;
	if (*s)
	{
		n += _strlen_recursion(s + 1);
		return (n);
	}
	return (1);
}
