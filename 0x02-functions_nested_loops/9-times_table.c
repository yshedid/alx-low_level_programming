#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i, j, temp, temp_first, temp_last;

	i = 0;
	while (i < 10)
	{
		j = 0;
		temp = i;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		while (j < 9)
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
			if (j == 8)
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
