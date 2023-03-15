#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - dublicates a string into a new memory location
 * @str: the string
 *
 * Return: returns a pointer to the new memory location
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr, *temp;

	temp = str;
	i = 0;
	size = 0;
	if (str == NULL)
		return (NULL);

	while (*temp != '\0')
	{
		size++;
		temp++;
	}

	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);



}
