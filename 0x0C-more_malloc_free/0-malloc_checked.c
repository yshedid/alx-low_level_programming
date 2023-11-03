#include <stdlib.h>
/**
 * malloc_checked - varient of malloc function
 * @b: the size of the memory that are to be allocated
 *
 * Return: a pointer to the allocated memory when success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
