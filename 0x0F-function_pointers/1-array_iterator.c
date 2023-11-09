/**
 * array_iterator - applies a given function to each element
 * of the array
 * @array: the array
 * @size: it's size
 * @action: the given function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size > 0 && !array && !action)
	{
		int i;

		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
