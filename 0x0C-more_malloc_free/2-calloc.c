#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a particular value.
 * @s: pointer to put the value
 * @x: the value
 * @n: max bytes to use
 * Return: s
*/

char *_memset(char *s, int x, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = x;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
			m = malloc(nmemb * sizeof(int));

			if (m == 0)
				return (NULL);

			_memset(m, 0, nmemb * sizeof(int));

			return (m);
}
