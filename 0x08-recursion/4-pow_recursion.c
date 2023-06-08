#include "main.h"
/**
 * _pow_recursion - calculates the x power y
 * @x: the number
 * @y: the power
 *
 * Return: the result or -1 if y is less 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
