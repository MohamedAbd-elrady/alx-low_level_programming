#include "main.h"

/**
 * puts_half - prints the seconed half of the string
 * @str: string passed
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	if (len % 2 == 0)
		len /= 2;
	else
		len = (len - 1) / 2;

	str -= len;

	while  (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
