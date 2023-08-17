#include "main.h"

/**
 * print_number - print the number passed
 * @n: number passed
 */

void print_number(int n)
{
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		if (n >= 1000)
		{
			_putchar('0' + (n / 1000));
			_putchar('0' + (n / 100) % 10);
			_putchar('0' + ((n % 100) / 10));
		}
		else if (n >= 100)
		{
			_putchar('0' + (n / 100));
			_putchar('0' + ((n % 100) / 10));
		}
		else if (n >= 10)
		{
			_putchar('0' + (n / 10));
		}
		_putchar('0' + (n % 10));
	}
	else
	{
		_putchar('0');
	}
}
