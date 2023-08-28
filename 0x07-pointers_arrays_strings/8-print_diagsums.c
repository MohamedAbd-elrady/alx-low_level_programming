#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to array a[][]
 * @size: number rows and columns
 */

void print_diagsums(int *a, int size)
{
	int row, i;
	int d1 = 0, d2 = 0;

	for (row = 0; row < size; row++)
	{
		d1 += a[row][row];
	}
	i = 0;
	for (row = size - 1; row >= 0; row --)
	{
		d2 += a[row][i];
		i++;
	}

	printf("%d, %d", d1, d2);
}
