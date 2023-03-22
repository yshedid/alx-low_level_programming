#include <stdlib.h>
/**
 * int_index - search algortim with a variaty of compare functions
 * @array: the array to be searched
 * @size: array's size
 * @cmp: compare function
 * Return: returns the index or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
