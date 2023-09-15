#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct types - struct that holds data types
 * @letter: letter to check
 * @func: pointer to function
 */

struct types
{
	char *letter;
	void (*func)(va_list);
};

typedef struct types da_typ;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
