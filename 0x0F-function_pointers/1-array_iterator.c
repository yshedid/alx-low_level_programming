#include <stdio.h>
/**
 * array_iterator - applay a given function to each element of
 *			the given array
 * @array: the given array
 * @size: it's size
 * @action: the function that will be applied
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
