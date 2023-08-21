#include "main.h"

/**
 * rev_string - takes string and reverse it
 * @s: string passed
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	/*s = s - len;*/
	len--;

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		i++;
		len--;
	}
}
