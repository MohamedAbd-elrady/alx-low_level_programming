#include <stdio.h>
/**
 * main - main block
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
