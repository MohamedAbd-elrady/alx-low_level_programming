#include "main.h"

/**
 * print_chessboard - print 2d array
 *
 * @a: pointer to array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar('0' + a[i][j]);
		}
		_putchar('\n');
	}
}
