#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
*@separator: separator string
*@n: number of parameters
*Return: sum of all parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *stringargs;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		stringargs = (va_arg(args, char*));
		if (stringargs == NULL)
			printf("(nil)");
		else
			printf("%s", stringargs);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
