#include "main.h"
/**
 * is_prime_number - checks if the number prime or not
 * @n: the number
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - a helper function for is_prime_number
 * @n: the number
 * @c: counter
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_helper(int n, int c)
{
	if (n % c == 0)
		return (0);
	if (c < n / 2)
		return (is_prime_helper(n, c + 1));
	return (1);
}
