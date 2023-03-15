#include "main.h"
#include "stdlib.h"
/**
 * create_array - creates an array with the given size
 * @size: the size of the array
 * @c: the first character in the array
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
