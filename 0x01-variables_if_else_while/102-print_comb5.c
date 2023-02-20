#include <stdio.h>
/**
 * main - entry point and contains all the code
 * Return: exits the program
 */
int main(void)
{
int i, j;
i = 0;
while (i < 99)
{
	j = i + 1;
	while (j < 100)
	{
		int i_temp1, i_temp2, j_temp1, j_temp2;

		i_temp1 = i % 10;
		i_temp2 = (i - i_temp1) / 10;
		j_temp1 = j % 10;
		j_temp2 = (j - j_temp1) / 10;
		putchar(i_temp2 + '0');
		putchar(i_temp1 + '0');
		putchar(' ');
		putchar(j_temp2 + '0');
		putchar(j_temp1 + '0');
		if (i == 98)
			break;
		putchar(',');
		putchar(' ');
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
