#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if b is NULL or that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int StrToNum = 0, b_to_uint = 0, i = 0, twos;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			;
		else if (b[i] == '1')
			StrToNum += 1;
		else
			return (0);

		if (b[i + 1] != '\0')
			StrToNum *= 10;
		i++;
	}

	if (StrToNum == 0)
		return (0);

	for (twos = 1; StrToNum != 0; StrToNum /= 10, twos *= 2)
	{
		b_to_uint += ((StrToNum % 10) * twos);
	}

	return (b_to_uint);
}
