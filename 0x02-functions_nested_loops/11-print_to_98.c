#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers frim a given number to 98
 * @n: the given number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n--);
		}
		else if (n < 98)
		{
			printf("%d, ", n++);
		}

	}
	printf("98\n");
}
