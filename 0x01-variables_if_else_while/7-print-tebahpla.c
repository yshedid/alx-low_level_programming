#include <stdio.h>
/**
 * main - entry point and contains all the code to print all the alphabet
 * Return: exit point
 */
int main(void)
{
char chr = 'z';
while (chr >= 'a')
{
	putchar(chr);
	chr--;
}
putchar('\n');
return (0);
}
