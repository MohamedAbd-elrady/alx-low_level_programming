#include "main.h"

/**
 * _strbrk -  searches a string for any of a set of bytes
 *
 * @s: string passed
 * @accept: array to compare
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *t;
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				t == (s + i);
				return (t);
			}

			j++;
		}

		i++;
	}

	return (0);
}
