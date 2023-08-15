#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural number until it reaches 98
 * @n: number passed
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", n);
}
