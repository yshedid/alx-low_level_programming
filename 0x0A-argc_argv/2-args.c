#include <stdio.h>
/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero if success
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
