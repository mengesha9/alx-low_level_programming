#include <stdio.h>
#include "3-calc.h"

/**
* op_add - adds 2 integers
*@a: integer1
*@b: integer2
*Return: results
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substracts 2 integers
*@a: integer1
*@b: integer2
*Return: results
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies 2 integers
*@a: integer1
*@b: integer2
*Return: results
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides 2 integers
*@a: integer1
*@b: integer2
*Return: results
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - module of 2 integers
*@a: integer1
*@b: integer2
*Return: results
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
