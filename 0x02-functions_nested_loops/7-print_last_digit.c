#include "main.h"
/**
 * print_last_digit - it's really obvious from the name
 * @n:the number that we will get the last digit from
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
