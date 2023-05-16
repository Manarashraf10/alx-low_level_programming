#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newely allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
int i, size;
char *ptr;

if (str == NULL)
return (NULL);
for (size = 0; str[size] != '\0'; size++)
ptr = malloc(size * sizeof(*str) + 1);

if (ptr == 0)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = str[i];
return (ptr);
}

