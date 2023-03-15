#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates two strings
 * @ac: number of arguments
 * @s2: arguments(strings)
 *
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	size_t i, j, size_sum;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = size_sum = 0;
	while (i < (size_t)ac)
	{
		size_sum += 1 + strlen(av[i]);
		i++;
	}
	ptr = malloc(size_sum + 1);
	i = 0;
	size_sum = 0;
	while (i < (size_t)ac)
	{
		j = 0;
		while (j < strlen(av[i]))
		{
			ptr[j + size_sum] = av[i][j];
			j++;
		}
		ptr[j + size_sum] = '\n';
		size_sum += strlen(av[i]) + 1;
		i++;
	}
	ptr[size_sum] = '\0';
	return (ptr);
}
