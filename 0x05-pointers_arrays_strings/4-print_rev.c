#include "main.h"

/**
 * print_rev - A function prints a string in reverse,
 * followed by a new line
 *
 * @s: string parameter
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
