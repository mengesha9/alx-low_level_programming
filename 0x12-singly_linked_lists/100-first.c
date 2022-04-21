#include <stdio.h>
#include "lists.h"

/**
 * premain - prints before main executes
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
