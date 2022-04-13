#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints name
*@name: string name
*@f: pointer function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
