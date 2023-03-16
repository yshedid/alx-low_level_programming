#include <stdlib.h>
/**
 * array_range - creates an array statring from min to max
 * @min: the first value
 * @max: the last value
 *
 * Return: return the array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
