#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the concatenated string
 */
char *str_concat(int ac, char **av)
{
	char *ptr;
	int i, j, size_sum;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = size_sum = 0;
	while (i < ac)
	{
		size_sum += strlen(av[i]);
		i++;
	}
	ptr = malloc(size_sum + 1);
	i = 0;
	j = 0;
	size_sum = 0;
	while (i < ac)
	{
		while (j < strlen(av[i] + size_sum))
		{
			ptr[j] = av[i][j];
			j++;
		}
		size_sum += strlen(av[i]);
		i++;
	}
	ptr[size_sum] = '\0';
	return (ptr);
}
