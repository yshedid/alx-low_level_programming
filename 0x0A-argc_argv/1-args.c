#include <stdio.h>
/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: 0 when success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
