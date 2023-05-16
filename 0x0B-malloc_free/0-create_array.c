#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function creates an array
 * @size: number of bytes allocates
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (ptr == 0 || size == 0)
	{
		return (NULL);
	}
	while (size--)
		ptr[size] = c;

	return (ptr);
}
