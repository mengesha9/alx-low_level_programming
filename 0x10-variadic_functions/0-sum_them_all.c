#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - adds all it's parameters
*@n: number of parameters
*Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n); /* initialize argument list */

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++) /* go through the arg list */
		sum += va_arg(args, unsigned int); /* grab and add each arg value */

	va_end(args); /* clean up */
	return (sum);
}
