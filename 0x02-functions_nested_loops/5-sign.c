#include "main.h"

/**
 * print_sign - checks if number is greater or equal or lower then zer0
 * @n: entered number
 * Return: 1 greater, -1 lower, 0 equal 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
