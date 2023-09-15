#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: result
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}

/**
 * wildcmp_helper - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 1 if compare, 0 if fail
 */

int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp_helper(s1, s2 + 1));

		while (*s1 != '\0')
		{
			if (wildcmp_helper(s1, s2 + 1))
				return (1);
			s1++;
		}
		return (wildcmp_helper(s1, s2 + 1));
	}

	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1));

	return (0);
}
