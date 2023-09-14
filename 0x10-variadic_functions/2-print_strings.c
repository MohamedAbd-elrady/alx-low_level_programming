#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int i, num_args;
	char *str;

	if (n == 0)
		return;

	num_args = n;

	va_start(args, n);

	for (i = 0; i < num_args; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL)
			if (i < num_args - 1)
				printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
