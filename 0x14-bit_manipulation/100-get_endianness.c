#include "main.h"
#include <stdio.h>
/**
 * get_endianness - finds endianness
 * Return: 1 if Little, 0 if Big.
 */

int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	if (*y)
	{
		return (1);
	}
	else
		return (0);
}

