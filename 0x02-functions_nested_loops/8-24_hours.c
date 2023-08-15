#include "main.h"

/**
 * jack_bauer - prints 24 hours in minutes
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + i);
			_putchar(':');
			_putchar('0' + j);
		}
	}
}
