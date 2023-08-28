#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 *
 * @s: string passed
 * @c: character to search for
 *
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
