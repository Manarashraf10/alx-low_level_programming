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
	int i;

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = i + 1;
	}
	return (ptr);
}

