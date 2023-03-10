#include <stdio.h>
#include <stdlib.h>
int coins_num(int mny);
/**
 * main - program the calculates the number of coins to get change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 when error 0 otherwise
 */
int main(int argc, char **argv)
{
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	printf("%d\n", coins_num(money));
	return (0);

}
/**
 * coins_num - returns how many coins as a change of a given money in cents
 * @mny: the money in cents
 *
 * Return: number of coins
 */
int coins_num(int mny)
{
	int sum;

	sum = 0;
	while (mny > 0)
	{
		if (mny >= 25)
		{
			sum += 1;
			mny -= 25;
		}
		else if (mny >= 10)
		{
			sum += 1;
			mny -= 10;
		}
		else if (mny >= 5)
		{
			sum += 1;
			mny -= 5;
		}
		else if (mny >= 2)
		{
			sum += 1;
			mny -= 2;
		}
		else
		{
			sum += 1;
			mny -= 1;
		}

	}
	return (sum);
}
