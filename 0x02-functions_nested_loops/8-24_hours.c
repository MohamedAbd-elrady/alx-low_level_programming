#include "main.h"

/**
 * jack_bauer - prints 24 hours in minutes
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int w;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (w = 0; w < 10; w++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + w);
					_putchar(' ');
					_putchar('\n');
				}
			}
		}
	}
}
