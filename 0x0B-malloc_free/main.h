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
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */

char *_strdup(char *str);

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height);

/**
 * free_grid - frees a 2-D grid previously created by alloc_grid
 * @grid: pointer to grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height);

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av);

/**
 * wordcounter - counts words and the letters in them
 * @str: string to count
 * @pos: position of the word to count characters from
 * @firstchar: position of the first letter of the word
 * if pos = 0, count the number of chars in the word
 * else count number of words
 * Return: wordcount if pos == 0,
 * length of word if pos > 0,
 * position of word if pos > 0 && firstchar > 0
 */

int wordcounter(char *str, int pos, char firstchar);

/**
 * strtow - convert a string into a 2d array of words
 * @str: string to convert
 * Return: double pointer to 2d array
 */

char **strtow(char *str);

#endif
