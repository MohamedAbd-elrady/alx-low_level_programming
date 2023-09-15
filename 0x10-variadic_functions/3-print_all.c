#include "variadic_functions.h"

/**
 * pc - prints char
 * @args: args
 */

void pc(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * pi - prints int
 * @args: args
 */

void pi(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * pf - prints float
 * @args: args
 */

void pf(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * ps - prints string
 * @args: args
 */

void ps(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;

	da_typ p_form[] = {
		{'c', pc},
		{'i', pi},
		{'f', pf},
		{'s', ps}
	};

	int i, j;

	va_start(args, format);

	i = 0;
	separator = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == p_form[j].letter)
			{
				printf("%s", separator);
				p_form[j].func(args);
				separator = ", ";
			}
			j++;
		}
	}

	va_end(args);
	printf("\n");


}
