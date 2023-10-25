#include "main.h"
/**
 * _sqrt_recursion - calculates the square root
 * @n: int
 *
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - a helper function for _sqrt_recursion
 * @n: int
 * @x: int
 *
 * Return: the root
 */

int _sqrt_helper(int n, int x)
{
	if (x <= (n / 2) + 1)
	{
		if (x * x == n)
		{
			return (x);
		}
		else
			return (_sqrt_helper(n, x + 1));
	}
	return (-1);

}
