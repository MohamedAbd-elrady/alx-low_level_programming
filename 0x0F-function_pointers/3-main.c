#include "3-calc.h"

/**
 * main - operates on 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 *
 * Description: if the number of arguments is wrong, print Error,
 * followed by a new line, and exit with the status 98
 * if the operator is none of the above, print Error,
 * followed by a new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error,
 * followed by a new line, and exit with the status 100
 *
 * Return: 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[3] != NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (s[0] == '/' || s[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), (atoi(argv[3]))));
	return (0);
}
