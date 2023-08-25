#include "main.h"

/**
 * string_toupper - all letters in string to upper case
 * @s: string passed
 * Return: string resulted
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;/*ascii diff bet up and low case*/
	}
	return (s);
}
