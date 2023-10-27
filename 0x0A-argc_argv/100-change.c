#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * @argc: counter
 * @argv: arguments
 *
 * Return: 0 when success 1 otherwise
 */

int main(int argc, char **argv)
{
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coins = 0;
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins += 1;
		} else if (cents >= 10)
		{
			cents -= 10;
			coins += 1;
		} else if (cents >= 5)
		{
			cents -= 5;
			coins += 1;
		} else if (cents >= 2)
		{
			cents -= 2;
			coins += 1;
		} else if (cents == 1)
		{
			coins += 1;
			break;
		}
	}
	printf("%d\n", coins);
	return (0);
}
