#include <stdio.h>
/**
 *main - Entry point, print 00 to 99
 *Return: Always 0 (Success)
 */
int main(void)
{
	int large;
	int small;

	for (large = '0'; large <= '9'; large++)
	{
		for (small = '0'; small <= '9'; small++)
		{
			putchar(large);
			putchar(small);
			if (!(large == '9' && small == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
