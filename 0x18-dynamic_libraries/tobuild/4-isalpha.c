#include "main.h"

/**
 * _isalpha - checks for uppercase or lowercase character
 * @c: character to check
 * Return: 1 if upercase or lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
