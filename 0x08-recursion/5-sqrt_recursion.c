#include "main.h"
int sqrt_helper(int, int);
/**
 * _sqrt_recursion - calculates the natural square root
 * @n: the numper
 *
 * Return: the square root or -1 if there is no natural sqrt
 */
int _sqrt_recursion(int n)
{
	sqrt_helper(1, n);
}
/**
 * sqrt_helper - helper function for _sqrt_recusrion
 * @x: holds a numper to be tested if root or not
 * @n: x is supposedly the root of n
 *
 * Return: the root or -1 if not found
 */
int sqrt_helper(int x, int n)
{
	if (x > n / 2)
		return (-1);
	if (x * x == n)
		return (x);
	sqrt_helper(x + 1, n);
}
