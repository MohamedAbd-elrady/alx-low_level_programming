#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: minimmum value
 * @max: maximum value
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
