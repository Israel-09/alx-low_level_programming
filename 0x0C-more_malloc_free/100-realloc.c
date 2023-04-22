#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to the memory block previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr, *old_ptr;
	unsigned int i;

	if (!ptr)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else
		{
			n_ptr = malloc(new_size);
			return (n_ptr);
		}
	}
	old_ptr = ptr;
	if (new_size == old_size)
		return (ptr);

	n_ptr = malloc(new_size);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			n_ptr[i] = old_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			n_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (n_ptr);

}
