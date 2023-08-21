#include "main.h"

/**
 * _puts - prints strings
 * @str: string passed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar('0' + str);
		str++;
	}
	_putchar('\n');
}
