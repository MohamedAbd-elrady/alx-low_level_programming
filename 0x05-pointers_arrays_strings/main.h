#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * reset_to_98 - reset the value to 98 with address
 * @*n: pointer to the variable
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps to variable using there address
 * @a: pointer to first variable
 * @b: pointer to seconed variable
 */

void swap_int(int *a, int *b);

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

int _strlen(char *s);

/**
 * _puts - prints strings
 * @str: string passed
 */

void _puts(char *str);

/**
 * print_rev - prints string in reverse
 * @s: string passed
 */

void print_rev(char *s);

/**
 * rev_string - takes string and reverse it
 * @s: string passed 
 */

void rev_string(char *s);


#endif
