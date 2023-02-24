#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: how big is the table
 */
void print_times_table(int n)
{
	int i, j, temp;

	if (n > 15 || n < 0)
		return;
	i = 0;
	while (i < n + 1)
	{
		j = 0;
		temp = i;
		_putchar('0');
		if (n == 0)
		{
			_putchar('\n');
			return;
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		while (j < n)
		{
			if (temp < 10)
				_putchar('0'+temp);
			else if ( temp < 100)
			{
				_putchar('0' + temp / 10);
				_putchar('0' + temp % 10);
			}
			else
			{
				_putchar('0' + temp / 100);
				_putchar('0' + temp / 10);
				_putchar('0' + temp % 10);
			}
			if (j == n - 1)
				break;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			temp += i;
			if (temp < 10)
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
