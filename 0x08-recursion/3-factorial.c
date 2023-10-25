#include "main.h"
/**
 * factorial - calculates the factorial
 * @n: the number
 *
 * Return: the answer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
