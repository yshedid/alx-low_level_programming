#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: how big is the table
 */
void print_times_table(int n)
{
	int i, j, temp, temp_first, temp_last;

	i = 0;
	while (i < n + 1)
	{
		j = 0;
		temp = i;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		while (j < n)
		{
			if (temp < 10)
				_putchar('0' + temp);
			else
			{
				temp_last = temp % 10;
				temp_first = (temp - temp_last) / 10;
				_putchar('0' + temp_first);
				_putchar('0' + temp_last);
			}
			if (j == n - 1)
				break;
			_putchar(',');
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
