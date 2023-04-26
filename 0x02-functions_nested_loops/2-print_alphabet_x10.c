#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: A program that prints lowercase alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j + 48; j++)
			_putchar(i);
		_putchar('\n');
	}
}
