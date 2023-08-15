#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int i, x, y, z;

	x = 0;
	y = 1;

	for (i = 0; i < 50; i++)
	{
		z = x + y;
		x = y;
		y = z;

		printf("%d", z);

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
