#include "main.h"

/**
 * *_realloc - allocates a memory block using malloc and free
 * @ptr: pointer to memory allocated with malloc(old_size)
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: size in bytes, of the new memory block
 * Return: NULL if new_size = 0 and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *m;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == 0)
{
m = malloc(new_size);
if (m == NULL)
return (NULL);
return (m);
}
if (new_size > old_size)
{
m = malloc(new_size);
if (m == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((char *)m + i) = *((char *)ptr + i);
free(ptr);
}
return (m);
}
