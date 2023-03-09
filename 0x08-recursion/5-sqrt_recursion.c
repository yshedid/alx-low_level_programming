#include "main.h"
/**
 * _sqrt_helper - a helper function for _sqrt_recursion
 * @n: the number
 * @i: an index to get closer to the base case
 *
 * Return: the natural root or -1 if there is no natural root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	_sqrt_helper(n, i + 1);
}
/**
 * _sqrt_recursion - calculates the natural square root of a given number
 * @n: the number
 *
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
