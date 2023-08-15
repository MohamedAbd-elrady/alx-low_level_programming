#include "main.h"

/**
 * print_times_table - print tiimes table
 * @n: passed number
 */

void print_times_table(int n)
{
	if (n < 15 || n > 0)
	{
		int row, coloum, res;

		for (coloum = 0 ; coloum <= n; coloum++)
		{
			for (row = 0; row <= n; row++)
			{
				res = coloum * row;

				if (res != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (res % 10));
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
				else if (res >= 100)
				{
					_putchar('0' + (res / 100));
					_putchar('0' + (res / 10) % 10);
					_putchar('0' + (res % 10));
				}
				else
				{
					_putchar('0' + (res % 10));
				}
			}
			_putchar('\n');
		}
	}
}
