#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase alphabet 10 times
 *Return: 0
 */

void print_alphabet_x10(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
