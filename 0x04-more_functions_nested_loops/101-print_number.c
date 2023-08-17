#include "main.h"

/**
 * print_number - print the number passed
 * @n: number passed
 */

void print_number(int n)
{
	long m; /* power of 10 */
	int c; /* boolean check */
	long num; /* convert int to long */

	num = n;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	m = 1;
	c = 1;
	while (c == 1)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
