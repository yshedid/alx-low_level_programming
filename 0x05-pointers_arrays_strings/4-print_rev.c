#include <stdio.h>
/**
 * print_rev - prints the reverse of a string
 * @s: the given string
 */
void print_rev(char *s)
{
	int i, count;

	count = 0;
	while (s != 0)
	{
		count++;
		s++;
	}
	i = count - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');

}
