#include <stdio.h>

/**
 * main - entry point
 * Return: always 0;
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long pn = 2; /* prime number */
	unsigned long c = 0;  /* check for largest */

	while (n > 1)
	{
		if (n % pn == 0)
		{
			n = n / pn;
			if (pn > c)
			{
				c = pn;
			}
		}
		else
		{
			pn++;
		}
	}

	printf("%lu\n", c);

	return (0);
}
