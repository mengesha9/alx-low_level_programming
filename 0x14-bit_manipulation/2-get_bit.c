#include "main.h"
#include <stdio.h>
/**
 * get_bit - return value of bit at index
 * @n: decimal number
 * @index: position of bit
 * Return: 1, 0 or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
