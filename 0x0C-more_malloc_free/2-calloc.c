#include <stdlib.h>
/**
 * _calloc - implemnt calloc using malloc
 * @nmemb: number of elements
 * @size: size in bytes i.e sizeof(int)
 * Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
