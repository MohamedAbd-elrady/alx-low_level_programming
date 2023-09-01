#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to look through
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, flag;

	if (needle[0] == '\0')
		return (haystack);

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{

			flag = i, j = 0;

			while (*(needle + j) != '\0')
			{
				if (*(haystack + flag) == *(needle + j))
				{
					flag ++, j++;
				}
				else
					break;
			}

			if (*(needle + j) == '\0')
				return (haystack + i);
		}

		i++;
	}

	return (0);
}
