#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* function that converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);
/* prints the binary representation of a number */
void print_binary(unsigned long int n);
/* returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);
/* sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);
/* sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);
/* returns the number of bits needed to flip to get from n to m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* checks the endianness */
int get_endianness(void);

#endif /* MAIN_HEADER */
