#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
*@array: array
*@size: size of array
*@cmp: compare function pointer
*Return: index integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		if (i == size)
			return (-1);
	}
	return (-1);
}
