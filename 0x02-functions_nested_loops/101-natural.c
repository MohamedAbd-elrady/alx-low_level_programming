#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i, res;

	i = 0;
	res = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf(res);
	return (0);
}
