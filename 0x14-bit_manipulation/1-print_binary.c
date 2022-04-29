#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary of a number
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{

	unsigned long int num = n;
	int length = 0;

	while (num > 0)
	{
		length++;
		num >>= 1; /* divides by 2 to get length of binary num */
	}
	length--;

	if (length < 0)
		putchar('0');

	while (length >= 0) /* compares each rightmost bit */
	{
		if ((n >> length) & 1)
			putchar('1');
		else
			putchar('0');
		length--;
	}
}
