#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of repeats
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			while (j)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\');

			if (i == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
