#include <stdio.h>
/**
 * main - main block
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar('i');
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
