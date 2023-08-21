#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string passed
 */

void print_rev(char *s)
{
	int len;
	char *str;

	len = _strlen(s);
	*str = *s;
	*s = '\0';

	while (*str != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
