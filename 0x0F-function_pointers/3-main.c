#include <stdio.h>
#include "3-calc.h"

/**
* main - calculator
*@argc: arguement counter
*@argv: arguments
*Return: results
*/

int main(int argc, char *argv[])
{
	int i, j, result;
	char *operator = argv[2];
	/* int (*f)(int, int); */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*
	* f = get_op_func(argv[2]);
	* if (f == NULL)
	* {
	*	printf("Error\n");
	*	exit(99);
	*} another way to verify operators by using the given function
	*/
	if (((*argv[2] != '+') && (*argv[2] != '-')
	&& (*argv[2] != '*') && (*argv[2] != '/')
	&& (*argv[2] != '%')) || strlen(operator) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	result = get_op_func(operator)(i, j);

	printf("%d\n", result);
	return (0);
}
