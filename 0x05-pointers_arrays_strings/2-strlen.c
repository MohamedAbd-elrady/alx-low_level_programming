#include "main.h"

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '0')
	{
		len++;
		s++;
	}
	return (len);
}
