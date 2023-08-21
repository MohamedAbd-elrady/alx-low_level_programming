#include "main.h"

/**
 * swap_int - swaps to variable using there address
 * @a: pointer to first variable
 * @b: pointer to seconed variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
