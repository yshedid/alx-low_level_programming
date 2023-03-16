#include <stdlib.h>
/**
 * malloc_checked - same functionality as malloc but it exits when it fails
 * @b: the numbre of bytes
 *
 * Return: a pointer to the new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
