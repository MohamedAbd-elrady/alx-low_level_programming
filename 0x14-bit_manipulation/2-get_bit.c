#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number sent
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = n, op = 1;

	op <<= index;

	if ((num & op) == 0)
		return (0);
	else if	((num & op))
		return (1);
	else
		return (-1);
}
