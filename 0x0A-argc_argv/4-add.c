#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * @argc: counter
 * @argv: arguments
 *
 * Return: 0 in success 1 otherwise
 */
int main(int argc, char **argv)
{
	long sum;
	int i;
	char *end;
	int num;

	sum = 0;
	i = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		num = strtol(argv[i], &end, 10);
		if (*end == '\0')
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);

}
