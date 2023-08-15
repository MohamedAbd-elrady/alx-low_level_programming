#include "main.h"

/**
 * add - ads to integers
 * Return: return the result
 */

int add(int a, int b)
{
	int res;

	res = a + b;

	if (res > 10)
	{
		_putchar('0' + (res / 10));
	}
	_putchar('0' + (res % 10));
}
