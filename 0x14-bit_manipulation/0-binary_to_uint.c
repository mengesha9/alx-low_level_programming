#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int decimal = 0, base = 1, binary;

	if (b == NULL)
		return (0);

	for (binary = 0; b[binary]; binary++)
	{
		if (b[binary] != '0' && b[binary] != '1')
			return (0);
	}

	for (--binary; b[binary]; binary--)
	{
		if (b[binary] == '1')
		{
			decimal += base;
		}
		base = base * 2;
	}
	return (decimal);
}
