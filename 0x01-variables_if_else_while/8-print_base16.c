#include <stdio.h>
/**
 * main - entry point to the program and contains all the code
 * Return: exits the program
 */
int main(void)
{
int x;
char chr;
x = 48;
while (x <= 57)
{
	putchar(x);
	x++;
}
chr = 'a';
while (chr <= 'f')
{
	putchar(chr);
	chr++;
}
putchar('\n');
return (0);
}
