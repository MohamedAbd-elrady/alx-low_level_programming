#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string passed
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	for (i = 0; i < len; i++)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
