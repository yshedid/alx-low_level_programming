#include <stdlib.h>
/**
 * free_grid - frees the memory manually alocated to 2d array
 * @grid: the 2d array
 * @height: it's size
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);

}
