#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block.
 * Return: NULL if conditions are checked.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
