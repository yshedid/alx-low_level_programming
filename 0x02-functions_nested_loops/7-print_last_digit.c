#include "main.h"
/**
 * print_last_digit - it's really obvious from the name
 * @n:the number that we will get the last digit from
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	long int temp;

	if (n < 0)
	{	temp = n;
		temp = -temp;
		_putchar((temp % 10) + '0');
		return (temp % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
