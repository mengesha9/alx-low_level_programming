#ifndef VARIADIC_HEADER
#define VARIADIC_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct dt
{
    char letter;
    void (*func)(va_list);
} datatype;

/* returns the sum of all it's parameters */
int sum_them_all(const unsigned int n, ...);
/* prints numbers followed by new line */
void print_numbers(const char *separator, const unsigned int n, ...);
/* prints strings followed by new line */
void print_strings(const char *separator, const unsigned int n, ...);
/* prints anything */
void print_all(const char * const format, ...);

#endif /* MAIN_HEADER */
