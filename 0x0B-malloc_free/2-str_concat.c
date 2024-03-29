#include <stdlib.h>
#include <stdio.h>
/**
 * array_size - returns the size of an array
 * @s: the string/array
 *
 * Return: size
 */

int array_size(char *s)
{
	int count;

	count = 0;
	if (s == NULL)
		return (count);
	while (*s)
	{
		count++;
		s += 1;
	}
	return (count);
}
/**
 * str_concat - concatenats two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size_1;
	int size_2;
	int new_size;
	int counter;
	char *ptr;

	size_1 = array_size(s1);
	size_2 = array_size(s2);
	new_size = size_1 + size_2;
	if (new_size == 0)
	{
		ptr = malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc(new_size * sizeof(char) + 1);
	if (ptr)
	{
		counter = 0;
		size_2 = 0;
		while (counter < new_size)
		{
			if (counter < size_1)
			{
				ptr[counter] = s1[counter];
			}
			else
			{
				ptr[counter] = s2[size_2];
				size_2++;
			}
			counter++;
		}
		ptr[new_size] = '\0';
		return (ptr);
	}
	return (ptr);
}
