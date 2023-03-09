#include "main.h"
/**
 * prime_helper - a helper function for is_prime_number
 * @n: the number
 * @i: an index to get closer to the base case
 *
 * Return: 1 if prime or 0 if not
 */
int prime_helper(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_helper(n, i + 1));
}
/**
 * is_prime_number - checks if the number is prime or not
 * @n: the number
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
