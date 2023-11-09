/**
 * int_index - search algorthim
 * @array: array
 * @size: it's size
 * @cmp: comparing function
 *
 * Return: index if success -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
