#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the bit at index to 1
 * @n: decimal number
 * @index: position
 * Return: 1 if successful, -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);
}
