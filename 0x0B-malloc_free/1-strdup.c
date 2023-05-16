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
int i = 0, size = 0;
char *ptr;

if (str == NULL)
return (NULL);
for (; str[size] != '\0'; size++)
;
/*+1 on the size puts the end of string character*/
ptr = malloc(size * sizeof(*str) + 1);

if (ptr == 0)
return (NULL);
for (; i < size; i++)
ptr[i] = str[i];
return (ptr);
}

