#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int i, num_args;

	num_args = n;

	va_start(args, n);

	for (i = 0; i < num_args; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			if (i < num_args - 1)
				printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
