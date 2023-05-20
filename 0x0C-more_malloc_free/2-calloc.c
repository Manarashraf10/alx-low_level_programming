#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc,
 * initialized to 0
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: void pointer to array space
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;

if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(size * nmemb);

if (m == 0)
return (NULL);

nmemb *= size;
while (nmemb--)
m[nmemb] = 0;
return (m);
}
