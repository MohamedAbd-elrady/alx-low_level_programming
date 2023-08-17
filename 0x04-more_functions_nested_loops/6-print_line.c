#include "main.h"

/**
 * print_line - prints _ for n times
 * @n: number of repeats
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
