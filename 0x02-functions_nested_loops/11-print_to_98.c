#include "main.h"

/**
 * print_to_98 - print natural numbers untill 98
 * @n: passed number
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (n > 98)
		{
			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10)) % 10);
			}
			else
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));
			_putchar(',');
			_putchar(' ');
			n--;
		}
		while (n < 98)
		{
			if (n > 0)
			{
				if (n >= 10)
				{
					_putchar('0' + (n / 10));
				}
				_putchar('0' + (n % 10));
				_putchar(',');
				_putchar(' ');
				n++;
			}
			if (n < 0)
			{
				int nw;

				nw = n * -1;

				if (nw <= -10)
				{
					_putchar('0' + (nw / 10));
				}
				_putchar('0' + (nw % 10));
                                _putchar(',');
				_putchar(' ');
				n++;
			}
		}
	}
	if (n == 98)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	_putchar('\n');
}
