#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of repeats
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
				{
					_putchar(' ');
				}
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
