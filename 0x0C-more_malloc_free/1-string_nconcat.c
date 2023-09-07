#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

int _strlen(char *s)
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
	int i, j, num;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num >= _strlen(s2))
		num = _strlen(s2);

	ptr = malloc(sizeof(char) * (num + _strlen(s1) + 1));

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
		for (j = 0; j < num; j++)
		{
			ptr[i + j] = s2[j];
		}
			ptr[i + j] = '\0';
		return (ptr);
	}
}
