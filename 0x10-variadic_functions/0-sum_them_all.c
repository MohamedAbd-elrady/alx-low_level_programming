#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: 0 if n == 0, else result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int i, num_args, sum = 0;

	if (n == 0)
		return (0);

	num_args = n;

	va_start(args, n);

	for (i = 0; i < num_args; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
