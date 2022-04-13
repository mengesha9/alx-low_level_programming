#ifndef FUNCTION_POINTERS_HEADER
#define FUNCTION_POINTERS_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/* Include Prototypes */

/* function that prints a name */
void print_name(char *name, void (*f)(char *));
/* executes a function given as a parameter on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));
/* searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));



#endif /* FUNCTION_POINTERS_HEADER */
