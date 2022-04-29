#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from n to m.
 * @n: decimal number
 * @m: decimal number
 * Return: count.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count = 0;

	for (i = n ^ m; i > 0; i = i >> 1)
		count += i & 1;

	return (count);
}

