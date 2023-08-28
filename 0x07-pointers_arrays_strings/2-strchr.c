#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 *
 * @s: string passed
 * @c: character to search for
 *
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (s == c)
			break;
		s++;
	}

	return (s);
}
