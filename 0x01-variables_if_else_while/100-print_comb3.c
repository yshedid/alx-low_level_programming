#include <stdio.h>
/**
 * main - entry point and contains all the code
 * Return: exits the program
 */
int main(void)
{
int i, j;
i = 0;
while (i < 9)
{
	j = i + 1;
	while (j < 10)
	{
		putchar(i + '0');
		putchar(j + '0');
		if (i == 8)
			break;
		putchar(',');
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
