#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of repeats
 */

void print_diagonal(int n)
{
	int i;
	int j;

	j = 1;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j++;

			while (j)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
