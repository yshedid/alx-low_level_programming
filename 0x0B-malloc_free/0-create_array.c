#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: the size of the array
 * @c: first char in the array
 *
 * Return: the created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size < 1)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (size)
	{
		ptr[size - 1] = c;
		size--;
	}
	return (ptr);
}
