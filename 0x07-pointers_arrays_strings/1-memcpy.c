#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @dest: first memory area
 * @scr: second memory area
 * @n: number of bytes
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}

	return (dest);
}
