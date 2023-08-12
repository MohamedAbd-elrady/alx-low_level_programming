#include <stdio.h>
/**
 * main - main block
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' || c != 'o')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
