#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero if success 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Erorr\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
