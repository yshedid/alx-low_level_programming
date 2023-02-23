#include "main.h"
/**
 * jack_bauer - function that prints every minute and hour in the day
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
				_putchar(i + '0');
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
				_putchar('0' + j);
			j++;
			_putchar('\n');
		}
		i++;
	}
}
