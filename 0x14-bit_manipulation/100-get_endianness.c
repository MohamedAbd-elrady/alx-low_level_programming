#include "main.h"

/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	/* test if first byte stored is 0 or 1 */
	/* big endian would store 0, little would store 1 */

	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
