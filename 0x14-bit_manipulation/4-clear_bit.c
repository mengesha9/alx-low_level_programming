#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clears the bit at index
 * @n: decimal number
 * @index: position
 * Return: 1 if successful, -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
