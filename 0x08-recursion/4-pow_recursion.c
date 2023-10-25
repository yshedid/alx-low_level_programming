#include "main.h"
/**
 * _pow_recursion - calculates x^y
 * @x: the base
 * @y: the exponent
 *
 * Return: the answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
