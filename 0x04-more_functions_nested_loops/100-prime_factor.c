#include <stdio.h>

/**
 * main - entry point
 * Return: always 0;
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long pn = 2; /*prime number*/
	unsigned long c = 0; /*check for largest*/
	int i = 0;

	while (1)
	{
		while (i == 0)
		{
			if (pn != 2)
			{
				if ((pn % 1 == 0) && (pn % pn == 0))
				{
					i = 1;
				}
				else
				{
					pn++;
				}
			}
			else
			{
				i = 1;
			}
		}
		if (n / pn != 1)
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
				i = 0;
			}
		}
		else
		{
			printf("%ld", c);
			break;
		}
	}
	return (0);
}
