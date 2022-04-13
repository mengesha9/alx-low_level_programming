#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes function per element of array
*@array: array
*@size: size of array
*@action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

