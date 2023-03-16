#include<stdlib.h>
#include<stdio.h>
#include <string.h>
/**
 * _realloc - similer to realloc function
 * @ptr: old memory
 * @old_size: the size of ptr
 * @new_size: size of new_ptr
 *
 * Return: new_ptr if succuss
 *		the old pointer if old_size = new_size and null otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
	}
	return (new_ptr);
}
