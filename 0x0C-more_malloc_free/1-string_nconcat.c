#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

unsigned int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: the first bytes needded from s2.
 * Return: pointeer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	ptr = malloc(sizeof(char) * (n + _strlen(s1) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		if (n >= _strlen(s2))
		{
			for (j = 0; *(s2 + j) != '\0'; j++)
			{
				ptr[i + j] = s2[j];
			}
			ptr[i + j + 1] = '\0';
		}
		else
		{
			for (j = 0; j < n; j++)
                        {
                                ptr[i + j] = s2[j];
                        }
                        ptr[i + j + 1] = '\0';
		}
		return (ptr);
	}
}
