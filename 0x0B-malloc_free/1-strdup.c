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
	while (*s)
	{
		count++;
		s += 1;
	}
	return (count);
}

/**
 * _strdup - duplicates a string
 * @str: the string
 *
 * Return: the new string
 */
char *_strdup(char *str)
{
	int size;
	char *ptr;

	if (str == NULL)
		return (NULL);
	size = array_size(str);
	ptr = malloc((sizeof(char) * size) + 1);
	if (ptr == NULL)
		return (NULL);

	while (size)
	{
		ptr[size - 1] = str[size - 1];
		size--;
	}
	return (ptr);
}
