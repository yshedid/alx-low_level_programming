#include <stdio.h>
/**
 * print_rev - prints the reverse of a string
 * @s: the given string
 */
void print_rev(char *s)
{
	int i, count, j;

	count = 0;
	j = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	const x = count;
	char str[x];

	i = count - 1;
	while (i >= 0)
	{
	str[j] =  s[i];
	i--;
	j++;
	}
	printf("%s", str);

}
