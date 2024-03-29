#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes of the memory area
 * @s: pointer to the memory area
 * @b: constant byte
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
