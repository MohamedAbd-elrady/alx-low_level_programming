function_pointers.h
#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_name - function that prints a name.
 * @name: string to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *));

#endif
