#include <stdio.h>

/**
 * main - entry
 * @argc: counter
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
