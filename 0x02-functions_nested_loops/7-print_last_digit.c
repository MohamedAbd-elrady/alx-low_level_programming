#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number to check
 * Return: the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
