#include "main.h"
/**
 * is_prime_numper - checks if the numper is prime or not
 * @n: the numper
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_numper(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime_helper(n, n - (n / 2) + 1));
}
/**
 * prime_helper - helper function for is_prime_numper
 * @n: the number to be checked
 * @x: index and divider
 *
 * Return: 0 if not prime 1 if prime
 */
int prime_helper(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prime_helper(n, x - 1));
}
