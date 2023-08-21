#include "main.h"

/**
 * puts2 - prints even caracters in the string
 * @str: string passed
 */

void puts2(char *str)
{
	/*while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}*/
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
