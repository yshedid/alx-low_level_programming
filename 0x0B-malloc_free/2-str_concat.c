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
char *str_concat(char *s1, char *s2)
{
	size_t size_1, size_2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_1 = strlen(s1);
	size_2 = strlen(s2);
	ptr = malloc(size_1 + size_2 + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i <= size_1 + size_2)
	{
		if (i < size_1)
		{
			ptr[i] = s1[i];
		}
		else if (i < size_1 + size_2)
		{
			ptr[i] = s2[i - size_1];
		}
		else
			ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
