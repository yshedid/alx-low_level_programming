#include <stdio.h>
/**
 * main - entry point and contains all the code
 * Return: exits the program
 */
int main(void)
{
int i, j, k;
i = 0;
while (i < 8)
{
	j = i + 1;
	while (j < 9)
	{
		k = j + 1;
		while (k < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');
			if (i == 7)
				break;
			putchar(',');
			putchar(' ');
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
