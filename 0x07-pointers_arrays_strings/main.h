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
 * @src: second memory area
 * @n: number of bytes
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 *
 * @s: string passed
 * @c: character to search for
 *
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c);

#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk -  searches a string for any of a set of bytes
 *
 * @s: string passed
 * @accept: array to compare
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 *
 * @haystack: string to look through
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print 2d array
 *
 * @a: pointer to array
 */

void print_chessboard(char (*a)[8]);


#endif
