#include <stdio.h>
/**
 * main - entry point to the program
 * Return: exits the program
 */
int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
	if (c == ('z' + 1))
		c = 'A';
	else if (c == ('Z' + 1))
		break;
}
putchar('\n');
return (0);
}
