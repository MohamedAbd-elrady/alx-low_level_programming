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
 * malloc_checked - function that allocates memory using malloc
 * @b: malloc size
 * Return: pointer to malloc result
 */

void *malloc_checked(unsigned int b);

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

int _strlen(char *s);

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: the first bytes needded from s2.
 * Return: pointeer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements of the array.
 * @size: size of byte.
 * Return: pointer to array.
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range -  function that creates an array of integers.
 * @min: minimmum value
 * @max: maximum value
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max);

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr:  pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: pointer to new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#endif
