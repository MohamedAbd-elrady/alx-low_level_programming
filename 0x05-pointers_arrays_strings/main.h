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

/**
 * puts2 - prints even caracters in the string
 * @str: string passed
 */

void puts2(char *str);

/**
 * puts_half - prints the seconed half of the string
 * @str: string passed
 */

void puts_half(char *str);

/**
 * print_array - prints desired element of an array
 * @a: array name
 * @n: number of elements
 */

void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: pointer to copy
 * @src: pointer to string
 *
 * Return: return pointer of copied data
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts string to integar
 * @s: string passed
 * Return: coverted value
 */

int _atoi(char *s);


#endif
