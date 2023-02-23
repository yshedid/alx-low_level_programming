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
		{	int last_i, last_j;

			last_i = i % 10;
			last_j = j % 10;
			_putchar((i - last_i) / 10 + '0');
			_putchar(last_i + '0');
			_putchar(':');
			_putchar((j - last_j) / 10 + '0');
			_putchar('0' + last_j);
			j++;
			_putchar('\n');
		}
		i++;
	}
}
