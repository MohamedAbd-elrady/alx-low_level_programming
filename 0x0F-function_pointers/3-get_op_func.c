#include "3-calc.h"

/**
 * get_op_func - function returns a pointer to the function that selects
 * the correct function to perform the operation asked by the user.
 * @s: the operator passed as argument to the program
 * Return: returns a pointer to the function, if fails return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i]->op != NULL)
	{
		if (ops[i]->op == s)
		{
			return (ops[i]->f);
		}
		i++;
	}


	return (NULL);
}
