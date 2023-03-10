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
	long int temp;

	if (argc < 3)
	{
		printf("Erorr\n");
		return (1);
	}
	temp =  atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", temp);
	return (0);
}
