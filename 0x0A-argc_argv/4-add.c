#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero if success 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (!strtol(argv[i], &ptr, 10) || *ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
