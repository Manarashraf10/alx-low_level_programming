#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: A function to print lowercase alphabet
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
