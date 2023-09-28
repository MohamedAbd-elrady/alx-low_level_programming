#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = n, op = 1;
	int length = 0;

	while (num > 0)
	{
		num >>= 1;
		length++;
	}
	length--;

	if (length > 0)
		op <<= length;

	while (op > 0)
	{
		if (n & op)
			_putchar('1');
		else
			_putchar('0');

		op >>= 1;
	}
}
