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
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 *
 * @s: pointer to memory area
 * @b: contstant byte
 * @n: number of bytes
 *
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @dest: first memory area
 * @scr: second memory area
 * @n: number of bytes
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n);


#endif
