#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the starting int
 * @max: the last int
 *
 * Return: the array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < max - min + 1)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
