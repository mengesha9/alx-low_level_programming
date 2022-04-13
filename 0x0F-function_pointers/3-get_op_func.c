#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - picks a function
*@s: a string
*Return: operation function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};

	int i = 0;

	while (ops->op)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
