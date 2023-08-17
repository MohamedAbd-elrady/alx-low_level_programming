#include "main.h"

/**
 * print_triangle - prints the left half of the triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, k, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = (size - i); k > 0; k--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
