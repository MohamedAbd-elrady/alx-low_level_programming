#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array passed
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL; size >= 0; action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
