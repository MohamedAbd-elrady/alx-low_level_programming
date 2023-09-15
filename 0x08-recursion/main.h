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
 * _puts_recursion - print string with new line
 * @s: string to print
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print string in reverse
 * @s: string passed
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s);

/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorial of number
 */

int factorial(int n);

/**
 * _pow_recursion - raise x to power y
 * @x: number
 * @y: power to raise to
 * Return: power of a number, -1 if power less than 0
 */

int _pow_recursion(int x, int y);

/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */

int checker(int n, int base);

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n);

/**
 * is_prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @divisor: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int is_prime(int n, int divisor);

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n);

/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *head, char *tail);

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s);

/**
 * wildcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: result
 */

int wildcmp(char *s1, char *s2);

/**
 * wildcmp_helper - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 1 if compare, 0 if fail
 */

int wildcmp_helper(char *s1, char *s2);

#endif
