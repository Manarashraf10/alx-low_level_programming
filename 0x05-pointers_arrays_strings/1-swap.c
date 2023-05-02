#include "main.h"

/**
 * swap_int - a function that swaps the value
 * of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

