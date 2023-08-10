#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			if (ptr[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}

	return (ptr);
}
