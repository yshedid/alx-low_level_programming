#include <stdlib.h>
/**
 * _calloc - implemnt calloc using malloc
 * @nmemb: number of elements
 * @size: size in bytes i.e sizeof(int)
 * Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	void *arr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = '0';
		i++;
	}
	arr = ptr;
	return (arr);
}
