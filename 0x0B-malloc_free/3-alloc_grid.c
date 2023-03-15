#include <stdlib.h>
/**
 * alloc_grid - returns a 2d array
 * @width: the size of the arrays inside the main array
 * @height: size of the main array
 *
 * Return: a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < width)
	{
		ptr[i] = malloc(height * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
		j = 0;
		while (j < height)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);

}
