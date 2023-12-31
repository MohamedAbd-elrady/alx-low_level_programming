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
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c);

/**
 * _isdigit - checks for digit 0 to 9
 * @c: digit to check
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c);

/**
 * mul - takes to integers and multiply them
 * @a: first integer
 * @b: secound integer
 * Return: the result of multiply
 */

int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - prints from 0 to 9 except 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - prints from 0 to 14 10x
 */

void more_numbers(void);

/**
 * print_line - prints _ for n times
 * @n: number of repeats
 */

void print_line(int n);

/**
 * print_diagonal - prints diagonal lines
 * @n: number of repeats
 */

void print_diagonal(int n);

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size);

/**
 * print_triangle - prints the left half of the triangle
 * @size: size of the triangle
 */

void print_triangle(int size);

/**
 * print_number - print the number passed
 * @n: number passed
 */

void print_number(int n);


#endif
