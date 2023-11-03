#include <stdlib.h>
/**
 * _calloc - implementaion to the function calloc
 * @nmemb: number of members in the array
 * @size: size of each member
 * Return: an array intialized with 0 or NULL if if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
