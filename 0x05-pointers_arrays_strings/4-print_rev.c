#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string passed
 */

void print_rev(char *s)
{
	char *str;

	*str = *s;
	*s = '\0';

	while (*str != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
