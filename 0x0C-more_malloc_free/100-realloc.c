#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr:  pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);


		if (p == NULL)
		{
			return (NULL);
		}

		return (p);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return(NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	ptr1 = ptr;

	for (i = 0; i < old_size; i++)
	{
		p[i] = ptr[i];
	}

	free (ptr);
	return (p);
}
