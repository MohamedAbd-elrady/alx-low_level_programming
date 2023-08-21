#include "main.h"

/**
 * puts2 - prints even caracters in the string
 * @str: string passed
 */

void puts2(char *str)
{
	_putchar(*str);

	while (*str != '\0')
	{
		_putchar(*(str+2));
	}
}
