#include <stdio.h>
/**
 * main - entry point and contains all the code
 * Return: exits the code
 */
int main(void)
{
int x = 0;
while (x < 10)
{
	putchar(x + '0');
	if (x == 9)
		break;
	putchar(',');
	putchar(' ');
	x++;
}
putchar('\n');
return (0);
}
