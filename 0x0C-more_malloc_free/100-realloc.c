#include <stdlib.h>
/**
 * _realloc - variant of the function realloc
 * @ptr: previous array
 * @old_size: previous size
 * @new_size: duh
 * Return: ptr to the memory with the new size or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *ptr_clone;
	unsigned int i;

	ptr_clone = (char *)ptr;
	if (new_size == old_size)
		return (ptr);
	if (!ptr)
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
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	i = 0;
	while (i < old_size && i < new_size)
	{
		new_ptr[i] = ptr_clone[i];
		i++;
	}
	free(ptr);
	return ((void *)new_ptr);
}
