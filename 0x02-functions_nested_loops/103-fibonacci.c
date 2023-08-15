#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int i, x, y, z, sum;

	x = 0;
	y = 1;

	sum = 0;

	for (i = 0; i < 50; i++)
	{
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0 && z < 4000000)
		{
			sum += z;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
