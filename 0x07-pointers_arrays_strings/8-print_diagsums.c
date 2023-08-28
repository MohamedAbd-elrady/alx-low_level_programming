#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to array a[][]
 * @size: number rows and columns
 */

void print_diagsums(int *a, int size)
{
	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		d1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		d2 += a[i];
	}

	printf("%d, %d", d1, d2);
}
