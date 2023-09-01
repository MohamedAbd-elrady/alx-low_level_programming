#include "main.h"

/**
 * _atoi - converts string to integar
 * @s: string passed
 * Return: coverted value
 */

int _atoi(char *s)
{
	short boolean;
	int i, minus, result;

	i = minus = result = boolean = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
